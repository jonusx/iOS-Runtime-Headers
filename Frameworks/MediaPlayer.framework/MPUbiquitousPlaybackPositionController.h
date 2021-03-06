/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, SBCPlaybackPositionServiceProxy;

@interface MPUbiquitousPlaybackPositionController : NSObject {
    BOOL _applicationBecomingActive;
    BOOL _beganUsingPlaybackPositionMetadata;
    BOOL _databaseHasBookmarkableContents;
    BOOL _externallyActive;
    BOOL _isServiceActive;
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionServiceProxy *_uppServiceProxy;
}

@property(readonly) BOOL applicationBecomingActive;
@property(getter=isServiceActive) BOOL beganUsingPlaybackPositionMetadata;
@property BOOL databaseHasBookmarkableContents;
@property BOOL externallyActive;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(getter=isServiceActive) BOOL serviceActive;
@property(retain) SBCPlaybackPositionServiceProxy * uppServiceProxy;

+ (id)sharedUbiquitousPlaybackPositionController;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidEnterForegroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (BOOL)_isEnabled;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_onQueue_becomeActiveService;
- (id)_onQueue_connectedUPPServiceProxy;
- (void)_onQueue_resignActiveService;
- (void)_onQueue_setDatabaseHasBookmarkableContents:(BOOL)arg1;
- (BOOL)_onQueue_shouldBeActive;
- (void)_onQueue_updateActiveServiceIfNeeded;
- (void)_onQueue_updateBoomkarkabilityState;
- (BOOL)applicationBecomingActive;
- (void)beginUsingPlaybackPositionMetadata;
- (BOOL)databaseHasBookmarkableContents;
- (void)dealloc;
- (BOOL)externallyActive;
- (id)init;
- (BOOL)isServiceActive;
- (BOOL)isServiceActive;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2;
- (id)queue;
- (void)setBeganUsingPlaybackPositionMetadata:(BOOL)arg1;
- (void)setDatabaseHasBookmarkableContents:(BOOL)arg1;
- (void)setExternallyActive:(BOOL)arg1;
- (void)setServiceActive:(BOOL)arg1;
- (void)setUppServiceProxy:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id)arg1;
- (id)uppServiceProxy;

@end
