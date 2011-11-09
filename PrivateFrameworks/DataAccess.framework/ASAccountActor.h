/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ASAccountActor : AKActor <ASAccountActorMessages> {
}


- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 consumer:(id)arg8 context:(void*)arg9;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (id)mailboxes;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (void)performFolderChange:(id)arg1;
- (BOOL)isHotmailAccount;
- (int)supportsMailboxSearch;
- (int)mailNumberOfPastDaysToSync;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 consumer:(id)arg4;
- (oneway void)cancelTaskWithID:(int)arg1;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (int)supportsEmailFlagging;
- (oneway void)shutdown;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)arg1 withTag:(id*)arg2;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)performSearchQuery:(id)arg1;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (id)signingIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (oneway void)setAccount:(id)arg1;
- (BOOL)generatesBulletins;
- (oneway void)setGeneratesBulletins:(BOOL)arg1;
- (id)initWithDAAccount:(id)arg1;
- (id)foldersTag;
- (oneway void)_accountPasswordChanged;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 consumer:(id)arg4;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)startup;
- (BOOL)searchQueriesRunning;
- (oneway void)cancelAllSearchQueries;

@end