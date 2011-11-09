/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKMediaObject, UINavigationItem, CKBalloonView, UINavigationController, CKTranscriptTableView, NSNumber, NSNotification, NSString, CKTranscriptBubbleData, CKAggregateConversation, CKTypingIndicatorView, CKEffectsWindow, QLPreviewController, CKMessageEntryView, ABPeoplePickerNavigationController, CKInteractiveImageBalloonView, CKRecipientListView, NSMutableSet, UIBarButtonItem, CKRecipientGenerator, UIView, CKLinksController, NSArray, CKTimedQueue, CKMessage, CKTranscriptStatusController, CKMessageEncodingInfo, NSMutableArray, EKICSPreviewController, CKMessageComposition, UIImageView, CKRecipientSelectionView, CKTranscriptToolbarView, UIToolbar, NSOperationQueue, <CKTranscriptComposeDelegate>, CKTranscriptHeaderView, UITapGestureRecognizer, NSDictionary;

@interface CKTranscriptController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, CKTranscriptButtonViewDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDataSource, QLPreviewControllerDelegate> {
    EKICSPreviewController *_icsPreviewController;
    CKAggregateConversation *_conversation;
    UINavigationController *_navigationController;
    UINavigationItem *_navItem;
    CKTranscriptStatusController *_statusBar;
    UIBarButtonItem *_actionItem;
    UIBarButtonItem *_clearAllItem;
    CKTranscriptToolbarView *_transcriptToolbarView;
    CKTranscriptHeaderView *_transcriptHeaderView;
    UIView *_backPlacard;
    UIImageView *_transcriptTopShadow;
    UIImageView *_transcriptLeftShadow;
    CKTranscriptTableView *_transcriptTable;
    CKRecipientListView *_recipientListView;
    CKRecipientSelectionView *_recipientSelectionView;
    CKMessageEntryView *_entryView;
    CKBalloonView *_balloonToRestoreAfterRotation;
    CKInteractiveImageBalloonView *_interactiveImageBalloonView;
    UINavigationController *_fullscreenPhotoScrollerNavigationController;
    CKTranscriptBubbleData *_bubbleInfo;
    CKMessage *_lastMessage;
    CKMessage *_lastSentMessage;
    <CKTranscriptComposeDelegate> *_composeDelegate;
    NSMutableArray *_outboundMessageLayers;
    CKTypingIndicatorView *_typingIndicatorForSendAnimation;
    NSMutableSet *_hiddenIndexPaths;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _scrollBlock;

    CKMessage *_smartForwardMessage;
    NSMutableArray *_newCompositionRecipients;
    NSMutableArray *_presetMessageParts;
    NSArray *_newCompositionAddresses;
    CKMediaObject *_previewItem;
    int _previewRow;
    NSString *_serviceAvailabilityKey;
    QLPreviewController *_previewController;
    CKMessageComposition *_newComposition;
    CKMessageEncodingInfo *_textMessageEncodingInfo;
    int _storedStatusBarStyle;
    int _setupState;
    BOOL _dimmed;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertViewHandler;

    unsigned int _rotationBlockingAnimationCount;
    unsigned int _isDisablingAutorotation : 1;
    unsigned int _dirty : 1;
    unsigned int _locked : 1;
    unsigned int _visible : 1;
    unsigned int _viewNeedsSetup : 1;
    unsigned int _newRecipient : 1;
    unsigned int _rescroll : 1;
    unsigned int _sending : 1;
    unsigned int _recipientListShouldBeExpanded : 1;
    unsigned int _transitioningToTranscript : 1;
    unsigned int _entryViewCanAcceptFocus : 1;
    unsigned int _isAnimatingMessageSend : 1;
    unsigned int _didCancel : 1;
    unsigned int _entryViewWasActiveBeforeEdit : 1;
    unsigned int _entryViewWasActiveBeforePushingViewController : 1;
    unsigned int _entryViewWasActiveBeforeSwitchingConversations : 1;
    unsigned int _recipientSelectionViewWasActiveBeforePushingViewController : 1;
    unsigned int _showingRecipientSelectionResults : 1;
    unsigned int _automaticKeyboardWasDisabled : 1;
    unsigned int _togglingEditing : 1;
    unsigned int _keyboardUndocked : 1;
    unsigned int _suspendScrollDueToMediaViewing : 1;
    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow : 1;
    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow : 1;
    unsigned int _preparingForResume : 1;
    unsigned int _appeared : 1;
    unsigned int _appearing : 1;
    unsigned int _settingConversation : 1;
    unsigned int _needsTransitionToFullTranscript : 1;
    unsigned int _heldUpdateCount;
    unsigned int _transcriptNeedsUpdateAfterHold;
    unsigned int _storedStatusBarIsHidden : 1;
    CKRecipientGenerator *_recipientGenerator;
    NSDictionary *_abPropertiesCache;
    ABPeoplePickerNavigationController *_peoplePickerController;
    CKLinksController *_linkViewController;
    UIToolbar *_actionsToolbar;
    NSOperationQueue *_mediaPreviewQueue;
    BOOL _canSafelyDismissImagePicker;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _transcriptAreaInsets;
    float _transcriptTableBottomOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardScreenFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardScreenFrameWithoutAccessoryView;
    NSNotification *_keyboardNotification;
    BOOL _showingKeyboard;
    BOOL _hidingKeyboard;
    BOOL _pushingKeyboard;
    BOOL _animatingKeyboardDueToPush;
    BOOL _kpgStartedAtBottomOfTranscript;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _kpgStartingTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _kpgCurrentTransform;
    float _kpgAnchorY;
    int _pendingInterfaceOrientation;
    BOOL _inRotation;
    BOOL _willRotateView;
    BOOL _shouldAdjustTranscriptOffsetForRotation;
    CKTimedQueue *_statusQueue;
    CKEffectsWindow *_effectsWindow;
}

@property NSNumber * canSafelyDismissImagePicker;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property BOOL enablesReturnKeyAutomatically;
@property int returnKeyType;
@property int keyboardAppearance;
@property int keyboardType;
@property int spellCheckingType;
@property int autocorrectionType;
@property int autocapitalizationType;
@property(copy) id alertHandler;
@property(copy) id scrollBlock;
@property(getter=isDimmed) BOOL dimmed;
@property(retain) NSMutableArray * presetMessageParts;
@property <CKTranscriptComposeDelegate> * composeDelegate;
@property(retain) CKMessage * smartForwardMessage;

+ (void)_sendDidStartSavingMediaNotification;
+ (void)_sendDidFinishSavingImageNotificationWithImage:(id)arg1 error:(id)arg2 context:(void*)arg3;
+ (void)_sendDidFinishSavingVideoNotificationWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3;
+ (id)tableColor;

- (void)send:(id)arg1;
- (void)setComposeDelegate:(id)arg1;
- (id)composeDelegate;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionViewReturnPressed:(id)arg1;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (BOOL)isNewRecipient;
- (void)setupForNewRecipient;
- (id)proposedRecipients;
- (void)cancelButtonClicked:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (void)_resetEntryViewSize;
- (void)dismissPeoplePicker;
- (id)_recipientGenerator;
- (void)updateNavigationButtons;
- (void)updateTitle;
- (void)_setupRecipientSelectionView;
- (void)_localeChanged:(id)arg1;
- (id)recipients;
- (id)_overlayView;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (struct CGPoint { float x1; float x2; })tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint { float x1; float x2; })arg2 context:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)reload:(BOOL)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (BOOL)_canReloadView;
- (void)loadView;
- (void)accessibilityLargeTextDidChange;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)isEditable;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)inputAccessoryView;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)numberOfRows;
- (id)navigationItem;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (id)defaultFirstResponder;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)__handleLoggingTapped:(id)arg1;
- (void)_showLoggingAlertIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrame;
- (void)_entryDebugShowEntryHUD;
- (void)entryDebugSliderChange:(id)arg1;
- (void)entryDebugClear;
- (void)ckMediaPreviewGeneratorFinished:(id)arg1;
- (void)ckPhotoScrollerViewControllerWillHideOverlays:(id)arg1;
- (void)ckPhotoScrollerViewControllerPressedDoneButton:(id)arg1;
- (BOOL)photoBrowserControllerShouldShowActionItem:(id)arg1;
- (void)photoBrowserController:(id)arg1 willShowActionSheetInView:(id)arg2;
- (void)addMedia:(id)arg1;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(unsigned int)arg1;
- (void)_userDidCaptureImage;
- (void)_userDidCancelCapturingImage;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (void)_addPreviewGeneratorObject:(id)arg1;
- (void)_showFullscreenPhotoScroller:(id)arg1 forRow:(int)arg2;
- (id)_interactiveImageBalloonViewForRow:(unsigned int)arg1;
- (void)_finishShowFullscreenPhotoScrollerAnimation;
- (id)_fullscreenImageWithSource:(struct CGImageSource { }*)arg1;
- (void)_dismissFullscreenPhotoScrollerAnimated:(BOOL)arg1;
- (void)_finishDismissFullscreenPhotoScrollerAnimation;
- (void)_showVCardViewerForRow:(int)arg1;
- (void)_showVCalViewerForRow:(int)arg1;
- (void)_showPhotoScrollerForTranscriptStartingAtRow:(int)arg1;
- (BOOL)_displayPreviewItemForMediaObject:(id)arg1 row:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)_addPart:(id)arg1;
- (void)_generatePreviewsForMediaObject:(id)arg1;
- (float)_distanceFromBottomOfScreenToTopEdgeOfKeyboardScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (void)parentControllerDidBecomeActive;
- (void)prepareForResume;
- (void)parentControllerDidResume:(BOOL)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)timedQueueFired:(id)arg1;
- (void)_stopAnimation:(id)arg1 exiting:(BOOL)arg2 decrementRotation:(BOOL)arg3;
- (void)addPresetMessagePart:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
- (struct CGPoint { float x1; float x2; })_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (void)messageCellTappedBalloon:(id)arg1;
- (void)messageCellTappedFailureButton:(id)arg1;
- (BOOL)messageCellShouldShowSendAsSMS:(id)arg1;
- (void)messageCellTappedSendAsSMS:(id)arg1;
- (void)scrollToMessageRowID:(int)arg1 partRowID:(int)arg2;
- (void)entryFieldDidBecomeActive:(id)arg1;
- (BOOL)entryFieldShouldBecomeActive:(id)arg1;
- (void)entryFieldAttachmentsChanged:(id)arg1;
- (void)entryFieldSubjectChanged:(id)arg1;
- (BOOL)entryField:(id)arg1 shouldChangeSubjectTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)entryField:(id)arg1 shouldChangeContentTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)entryField:(id)arg1 shouldInsertMediaObject:(id)arg2;
- (BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)arg1;
- (void)setNewComposition:(id)arg1 addresses:(id)arg2;
- (BOOL)personViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (void)tearDownPeoplePicker;
- (void)peoplePickerNavigationController:(id)arg1 displayedMembersOfGroup:(void*)arg2;
- (void)peoplePickerNavigationControllerDisplayedGroups:(id)arg1;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (id)transcriptTable;
- (void)linksController:(id)arg1 showABCardForLinkProperties:(id)arg2;
- (void)recipientListView:(id)arg1 addressAtomClicked:(id)arg2;
- (void)recipientListView:(id)arg1 contentSizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (void)recipientSelectionView:(id)arg1 isShowingSearchResults:(BOOL)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarTitle:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarCustomView:(id)arg2;
- (BOOL)_isVisible;
- (void)_setVisible:(BOOL)arg1;
- (void)_makeFieldForFocusActive;
- (void)_deactivateContentEntryView;
- (void)showKeyboardForReply;
- (void)_reflowMessageContent;
- (id)canSafelyDismissImagePicker;
- (void)setCanSafelyDismissImagePicker:(id)arg1;
- (id)_interactiveImageBalloonView;
- (id)_fullscreenPhotoScrollerNavigationController;
- (id)scrollBlock;
- (id)presetMessageParts;
- (void)setPresetMessageParts:(id)arg1;
- (id)smartForwardMessage;
- (BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (BOOL)allowContextProvider:(id)arg1;
- (id)getCurrentContext;
- (void)transcriptButtonView:(id)arg1 buttonClicked:(short)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)initWithNavigationController:(id)arg1;
- (void)_applicationBecameActive:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_messageReceived:(id)arg1;
- (void)_handleMessageRemovedNotification:(id)arg1;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_characterCountUISettingDidChangeNotification:(id)arg1;
- (void)_deliveryReceiptsEnabledDidChangeNotification:(id)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_keyboardDidShowOrHide:(id)arg1;
- (void)_keyboardLayoutDidChange:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_faceTimeAvailabilityChange:(id)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_receivedMessageSentNotification:(id)arg1;
- (void)_receivedMessageDeliveredNotification:(id)arg1;
- (void)_receivedMessageReadNotification:(id)arg1;
- (void)_receivedMessageTypingNotification:(id)arg1;
- (void)_receivedMessageErrorNotification:(id)arg1;
- (void)_receivedMessageContentChangedNotification:(id)arg1;
- (void)_receivedAggregateConversationPreferredServiceChangedNotification:(id)arg1;
- (void)_handleMadridLoginAccountStatusChangedNotification:(id)arg1;
- (void)_handleSendAsSMSSettingChanged:(id)arg1;
- (void)_handleMessagePartsUpdated:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_conversationDidBeginBatchUpdates:(id)arg1;
- (void)_conversationDidEndBatchUpdates:(id)arg1;
- (void)_cancelMessageSendAnimation;
- (void)_cancelShowFullscreenPhotoScrollerAnimation;
- (void)dismissPreviewController;
- (void)setScrollBlock:(id)arg1;
- (void)_updateBackPlacardSubviews;
- (void)_setupLoggingTapGestureRecognizer;
- (void)_tearDownLoggingTapGestureRecognizer;
- (void)_unloadBubbleData;
- (void)_setupKeyboardPushGesture;
- (id)_statusBar;
- (void)_resetTranscriptInsets;
- (void)_refreshViewForNewRecipientIfNeeded;
- (void)_refreshTranscript:(BOOL)arg1;
- (void)updateEntryView;
- (void)_refreshViewForCurrentConversationIfNeeded;
- (void)_requeryIDStatuses;
- (void)_saveDraftState;
- (void)_updateRecipientListView:(BOOL)arg1;
- (float)_heightOfTopTranscriptArea;
- (float)_accessoryViewHeight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withoutAccessoryViewOfHeight:(float)arg2 orientation:(int)arg3;
- (void)_refreshStatusBar;
- (void)_reflowTranscriptCells;
- (void)_markMessagesAsReadIfNecessary;
- (void)_updatePhotoButtonEnabled;
- (id)_bestServiceAvailableAndCanSend:(BOOL*)arg1 error:(id*)arg2;
- (void)_reloadTranscriptLayer;
- (void)updateTranscriptWithAnimation:(BOOL)arg1;
- (void)_dismissFullscreenPhotoScroller;
- (void)_performResume:(BOOL)arg1;
- (void)_updateTranscriptHeaderView;
- (id)conversation;
- (BOOL)_isHoldingUpdatesToTranscript;
- (BOOL)_updateTableWithInsertedRows:(id)arg1;
- (void)_updateTableWithDeletedRows:(id)arg1;
- (void)_updateTableWithDeletedRow:(int)arg1 rowAnimation:(int)arg2;
- (BOOL)_updateTableWithInsertedRow:(int)arg1;
- (id)bubbleData;
- (void)_updateTableWithDeletedRow:(int)arg1;
- (void)_reloadTranscriptLayerForcingBubbleDataReload:(BOOL)arg1;
- (BOOL)_messageIsForCurrentConversation:(id)arg1;
- (void)_queueStatusAction:(int)arg1 message:(id)arg2 conversation:(id)arg3 delay:(double)arg4;
- (void)_deferredDeliveredHandling:(id)arg1;
- (void)_deferredDeliveredRemoval:(id)arg1;
- (void)_deferredUpdateError:(id)arg1;
- (void)_deferredSentHandling:(id)arg1;
- (void)_deferredReadHandling:(id)arg1;
- (void)_deferredHandleTypingIndicator:(id)arg1;
- (void)_deferredMessageAppend:(id)arg1;
- (void)_defferredMessageContentChangeReceived:(id)arg1;
- (void)_deferredRemoveMessage:(id)arg1;
- (BOOL)_shouldBatchStatusActions:(id)arg1 messageIndex:(unsigned int*)arg2 typingIndicatorIndex:(unsigned int*)arg3;
- (void)_deferredBatchHandleTypingIndicatorRemovedAndHandleMessageRecieved:(id)arg1;
- (void)_processDequeuedAction:(int)arg1 message:(id)arg2 conversation:(id)arg3;
- (void)_dequeueStatusActions;
- (void)_beginHoldingUpdatesToTranscript;
- (void)_endHoldingUpdatesToTranscript;
- (void)_decrementRotationBlockingAnimationCount;
- (struct CGPoint { float x1; float x2; })bestVisibleOffsetForBubbleAtIndex:(int)arg1;
- (void)_setupViewForConversation;
- (void)setConversation:(id)arg1;
- (void)_computeBubbleData:(BOOL)arg1;
- (void)_updateFirstResponder;
- (void)_setupTranscriptHeader;
- (void)scrollBubbleIndexToVisible:(int)arg1;
- (void)_hideRecipientListView;
- (void)clearComposition;
- (int)_atomStyleForRecipientListView;
- (void)moveCursorToEnd;
- (id)_entryView;
- (BOOL)_isGroupMessage;
- (void)actionButtonClicked:(id)arg1;
- (void)clearCurrentMessageThread;
- (void)updateActionItem;
- (id)clearAllItem;
- (BOOL)isSendingMessage;
- (struct CGPoint { float x1; float x2; })_offsetForRow:(int)arg1 withInternalOffset:(float)arg2;
- (id)_actionsToolbar;
- (void)_updateActionsToolbarItems;
- (float)_maximumContentOffset;
- (void)_calculateTopVisibleRow:(int*)arg1 andOffset:(float*)arg2 forTransitionToEditing:(BOOL)arg3;
- (id)entryView;
- (void)_refreshTranscript;
- (void)_deleteMessagesAtIndexPaths:(id)arg1;
- (void)_hideTranscriptHeaderView;
- (void)_showTranscriptHeaderView;
- (void)_showRecipientListView;
- (void)_clearExpandRecipientListFlag;
- (void)_beginTransitioningToTranscript;
- (void)_endTransitioningToTranscript;
- (float)_topPaddingForBubbleRow:(int)arg1;
- (float)_bottomPaddingForBubbleRow:(int)arg1;
- (float)_heightOfContactPhotoForMessageAtIndex:(int)arg1;
- (id)appendMessageToBubbleData:(id)arg1;
- (void)_setMessagesHiddenForRows:(id)arg1;
- (void)_resizeEffectsWindowForMessageThrow;
- (void)_hideEffectsWindowForMessageThrow:(BOOL)arg1;
- (void)_throwOutboundMessageToTable;
- (id)effectsWindow;
- (BOOL)_keyboardUndocked;
- (BOOL)_keyboardScreenFrameIsOnScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrameForKeyboardScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })_idealSizeForEntryView:(struct CGSize { float x1; float x2; })arg1;
- (void)_setEntryViewSize:(struct CGSize { float x1; float x2; })arg1 animate:(BOOL)arg2 animationLength:(float)arg3;
- (void)_finishSendAnimation;
- (void)_makeContentEntryViewActive;
- (void)transitionFromNewMessageToConversation;
- (void)_incrementRotationBlockingAnimationCount;
- (void)updateTranscript;
- (void)_actuallyClearCurrentMessageThread;
- (void)_restoreEntryViewCursor;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (BOOL)shouldDismissAfterSend;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (void)_showMediaForTranscriptStartingAtRow:(int)arg1;
- (BOOL)_shouldShowUILogging;
- (BOOL)_shouldShowInternalUILogging;
- (id)_remoteLogDumpButtonTitle;
- (id)_localLogDumpButtonTitle;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_downgradeMessageAtIndexPath:(id)arg1;
- (void)_performLocalLogDump;
- (void)_performRemoteLogDump;
- (id)_messageForMessageCell:(id)arg1;
- (BOOL)_shouldShowSendAsSMSForMessage:(id)arg1;
- (void)_downgradeMessage:(id)arg1 validateSend:(BOOL)arg2;
- (void)setSmartForwardMessage:(id)arg1;
- (void)startSendAnimationForMessage:(id)arg1;
- (void)_finishedCreatingNewMessageForSending:(id)arg1;
- (void)entryFieldContentChanged:(id)arg1;
- (void)findConversationForRecipients:(id)arg1 onService:(id)arg2;
- (void)_updateCharacterCount;
- (void)_shrinkRecipientList;
- (void)sendMessage:(id)arg1;
- (unsigned int)countOfRecipientsIfSendingMessageNow;
- (void)_updateCharacterCountReplacingCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (BOOL)_resizeMessageEntryView:(id)arg1 contentSize:(struct CGSize { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (void)_setupNewComposition;
- (id)_abPersonViewControllerForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (id)_personViewControllerForProps:(id)arg1;
- (void)showPopover:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)showNewContactViewForEntity:(id)arg1;
- (void)showAddToExistingContactViewForEntity:(id)arg1;
- (void)showABCardForPerson:(void*)arg1 highlightedProperty:(int)arg2 identifier:(int)arg3;
- (BOOL)_editableAtIndexPath:(id)arg1;
- (BOOL)_contactPhotoIsTallerThanMessageAtIndex:(int)arg1;
- (BOOL)_disclosureSupportsMediaObject:(id)arg1;
- (id)_contactImageForMessage:(id)arg1;
- (void)showURLsForMessage:(id)arg1;
- (void)_displayABPersonViewController:(id)arg1;
- (BOOL)sharedShouldPresentMessageCompositionWithVCard:(id)arg1 filename:(id)arg2;
- (void)_updateUI;
- (void*)_newPersonWithValue:(struct __CFString { }*)arg1 forMultiValueProperty:(int)arg2;
- (id)_unknownPersonViewControllerForProps:(id)arg1;
- (void)showABCardForLinkProperties:(id)arg1;
- (void)dismissPeoplePicker:(id)arg1;
- (void)addRecipient:(void*)arg1 identifier:(int)arg2 phoneNumber:(id)arg3 makingContentEntryViewActive:(BOOL)arg4;
- (float)_maxHeightForOverlayView:(id)arg1 entryViewResize:(int)arg2;
- (void)_adjustCustomTitleViewFrame:(int)arg1;
- (void)_updateActionsToolbarItemsForRotation:(int)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_forwardSelectedMessages:(id)arg1;
- (id)_fieldForFocus;
- (void)_makeRecipientEntryViewActive;
- (float)_overlayViewMinHeight;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_setupMediaEntry;
- (float)_heightOfKeyboardScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_keyboardIsOnScreen;
- (float)_heightOfSpaceAboveKeyboard:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 undocked:(BOOL)arg2;
- (float)_heightOfKeyboard;
- (float)_distanceFromBottomOfScreenToTopEdgeOfKeyboard;
- (float)_bottomInset;
- (float)_topPaddingForRow:(int)arg1 forEditing:(BOOL)arg2;
- (void)setAlertHandler:(id)arg1;
- (id)alertHandler;
- (void)restoreBalloonStateAfterRotation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRectForBalloon:(id)arg1;
- (void)balloonWillResignFirstResponder:(id)arg1;
- (void)balloonDidFinishDataDetectorAction:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (BOOL)isDimmed;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (BOOL)messageEntryView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (id)composition;
- (id)init;
- (void)dealloc;
- (void)setMessageParts:(id)arg1;
- (void)prepareForSuspend;

@end