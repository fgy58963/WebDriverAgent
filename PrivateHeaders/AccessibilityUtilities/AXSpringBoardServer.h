/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSpringBoardServer : AXServer <AXSystemAppServer> {
    AXAccessQueue *_accessQueue;
    NSMutableArray *_actionHandlers;
    id /* block */ _currentAlertHandler;
    NSMutableDictionary *_reachabilityHandlers;
}

@property (nonatomic, retain) AXAccessQueue *accessQueue;
@property (nonatomic, retain) NSMutableArray *actionHandlers;
@property (nonatomic, copy) id /* block */ currentAlertHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *reachabilityHandlers;
@property (readonly) Class superclass;

+ (id)server;

- (id)_axSpringBoardServerInstance;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_getPasscodeStatusImmediate:(id /* block */)arg1;
- (id)_handleActionResult:(id)arg1;
- (id)_handleReachabilityResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1;
- (void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)_messageForMediaPlayingQueryForBundleID:(id)arg1;
- (id)_serviceName;
- (BOOL)_shouldDispatchLocally;
- (BOOL)_shouldValidateEntitlements;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)accessQueue;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)actionHandlers;
- (int)activeApplicationOrientation;
- (int)activeInterfaceOrientation;
- (void)activeInterfaceOrientation:(id /* block */)arg1;
- (id)allowedMedusaGestures;
- (id)applicationWithIdentifier:(id)arg1;
- (BOOL)areSystemGesturesDisabledByAccessibility;
- (BOOL)areSystemGesturesDisabledNatively;
- (void)backboardSnarfedMenuDown;
- (void)cancelReachabilityDetection;
- (void)cleanupAlertHandler;
- (BOOL)clearSideAppState;
- (void)copyStringToPasteboard:(id)arg1;
- (id /* block */)currentAlertHandler;
- (void)dealloc;
- (void)dismissAppSwitcher;
- (void)dismissSiri;
- (id)focusedAppPID;
- (id)focusedAppProcess;
- (id)focusedApps;
- (BOOL)hasActiveCall;
- (BOOL)hasActiveOrPendingCall;
- (BOOL)hasActiveOrPendingCallOrFaceTime;
- (void)hideAlert;
- (void)hideNotificationCenter;
- (id)init;
- (id)installedApps;
- (BOOL)isAppSwitcherVisible;
- (BOOL)isControlCenterVisible;
- (BOOL)isInspectorMinimized;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isMediaPlaying;
- (BOOL)isMediaPlayingForApp:(id)arg1;
- (void)isMediaPlayingForApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isMultiTaskingActive;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isOrientationLocked;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (BOOL)isPurpleBuddyAppFrontmost;
- (BOOL)isReceivingAirPlay;
- (BOOL)isRingerMuted;
- (BOOL)isScreenLockedWithPasscode:(BOOL*)arg1;
- (BOOL)isScreenSaverVisible;
- (BOOL)isSettingsAppFrontmost;
- (BOOL)isSideSwitchUsedForOrientation;
- (BOOL)isSideSwitcherVisible;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isSiriVisible;
- (BOOL)isSpeakThisTemporarilyDisabled;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (BOOL)isSystemAppFrontmost;
- (void)isSystemAppFrontmost:(id /* block */)arg1;
- (BOOL)isSystemAppFrontmostExludingSiri;
- (BOOL)isSystemAppShowingAnAlert;
- (BOOL)isSystemSleeping;
- (BOOL)isVoiceControlRunning;
- (void)openAppSwitcher;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openSCATCustomGestureCreation;
- (void)openSiri;
- (void)openVoiceControl;
- (void)pauseMedia;
- (void)pauseMediaForApp:(id)arg1;
- (BOOL)performMedusaGesture:(unsigned int)arg1;
- (int)pid;
- (void)pid:(id /* block */)arg1;
- (int)purpleBuddyPID;
- (void)purpleBuddyPID:(id /* block */)arg1;
- (id)reachabilityHandlers;
- (float)reachabilityOffset;
- (void)registerReachabilityHandler:(id /* block */)arg1 withIdentifierCallback:(id /* block */)arg2;
- (void)registerSpringBoardActionHandler:(id /* block */)arg1 withIdentifierCallback:(id /* block */)arg2;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)removeReachabilityHandler:(id)arg1;
- (void)resetDimTimer;
- (void)resumeMedia;
- (void)resumeMediaForApp:(id)arg1;
- (void)revealSpotlight;
- (id)runningAppPIDs;
- (id)runningAppProcesses;
- (void)screenLockStatus:(id /* block */)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setActionHandlers:(id)arg1;
- (void)setCancelGestureActivation:(unsigned int)arg1 cancelEnabled:(BOOL)arg2;
- (void)setCurrentAlertHandler:(id /* block */)arg1;
- (void)setHearingAidControlVisible:(BOOL)arg1;
- (void)setOrientationLocked:(BOOL)arg1;
- (void)setReachabilityActive:(BOOL)arg1;
- (void)setReachabilityHandlers:(id)arg1;
- (void)setShowSpeechPlaybackControls:(BOOL)arg1;
- (void)setSiriIsTalking:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)showAlert:(int)arg1 withHandler:(id /* block */)arg2;
- (void)showAlert:(int)arg1 withHandler:(id /* block */)arg2 withData:(id)arg3;
- (void)showControlCenter:(BOOL)arg1;
- (void)showNotificationCenter;
- (BOOL)showNotificationCenter:(BOOL)arg1;
- (void)startHearingAidServer;
- (void)systemAppInfoWithQuery:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)takeScreenshot;
- (BOOL)toggleIncomingCall;
- (void)toggleNotificationCenter;
- (int)topEventPidOverride;
- (void)unlockDevice;
- (float)volumeLevel;

@end
