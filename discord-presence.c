#include <stdio.h>

int main(){

}

static void UpdatePresence()
{
    char buffer[256];
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = "In a Group";
    sprintf(buffer, "Ranked | Mode: %d", GameEngine.GetMode());
    discordPresence.details = buffer;
    discordPresence.endTimestamp = time(0) + 5 * 60;
    discordPresence.largeImageKey = "canary-large";
    discordPresence.smallImageKey = "ptb-small";
    discordPresence.partyId = GameEngine.GetPartyId();
    discordPresence.partySize = 1;
    discordPresence.partyMax = 6;
    discordPresence.matchSecret = "4b2fdce12f639de8bfa7e3591b71a0d679d7c93f";
    discordPresence.spectateSecret = "e7eb30d2ee025ed05c71ea495f770b76454ee4e0";
    discordPresence.instance = 1;
    Discord_UpdatePresence(&discordPresence);
}