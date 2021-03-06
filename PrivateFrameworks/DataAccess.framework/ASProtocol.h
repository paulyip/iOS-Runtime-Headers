/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {
    ASProtocolCapabilities *_capabilities;
}

- (id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2;
- (id)_requestLinePrefixWithTask:(id)arg1;
- (void)_setCapabilitiesVersion:(id)arg1;
- (id)_usernameOnlyPortionOfUserString:(id)arg1;
- (id)addressBookConstraintsPath;
- (BOOL)allAttachmentsAreBase64ed;
- (BOOL)allowsReminderOnCompletedTasks;
- (id)calendarConstraintsPath;
- (BOOL)commandStringNeedsSaveInSent;
- (void)dealloc;
- (BOOL)fetchAttachmentsWithItemOperations;
- (BOOL)headerNeedsPolicyKey;
- (BOOL)headerNeedsProtocolVersion;
- (BOOL)headerNeedsUserAgent;
- (id)init;
- (id)initWithCachedVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)protocolVersion;
- (id)requestURLStringWithTask:(id)arg1;
- (BOOL)requiresExplicitlyFalseGetChanges;
- (BOOL)sendAttendeeRole;
- (BOOL)sendCalendarInfoInRecurrence;
- (BOOL)sendDeviceInfoOnProvision;
- (BOOL)sendEmailInWBXML;
- (BOOL)sendFirstDayOfWeekInRecurrence;
- (BOOL)sendUserAgentInDeviceInfo;
- (BOOL)serverCreatesEventChangesForInvitations;
- (BOOL)serverUpdatesAttendeeStatusOnEvents;
- (BOOL)shouldSendClassForFolderItemsSync;
- (BOOL)shouldSendFullContactInfo;
- (BOOL)shouldUseWBXMLProvisioning;
- (int)supportsEmailFlagging;
- (BOOL)supportsGALPhotos;
- (BOOL)supportsItemOperationsCommand;
- (int)supportsMailboxSearch;
- (BOOL)supportsNoteSyncing;
- (BOOL)supportsSettingsCommand;
- (BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
- (BOOL)useEventIdsInMeetingResponse;
- (BOOL)useSmartMailTasks;
- (BOOL)usesAirSyncBaseNamespace;
- (BOOL)usesTopLevelStatusCodes;
- (BOOL)versionChangeRequiresAccountUpgrade:(id)arg1;

@end
