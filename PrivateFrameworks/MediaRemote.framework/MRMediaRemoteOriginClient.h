/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSMutableDictionary;

@interface MRMediaRemoteOriginClient : NSObject {
    BOOL _canBeNowPlayingApp;
    id _commandHandlerBlock;
    NSMutableDictionary *_commandHandlerBlocks;
    BOOL _isOverrideApp;
    BOOL _keepAlive;
    int _notifyDidLaunchToken;
    int _notifyRestoreClientStateForLaunch;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
    struct _MROrigin { } *_origin;
    id _playbackStateRequestHandler;
    unsigned int _routeDiscoveryMode;
}

@property BOOL canBeNowPlayingApp;
@property(copy,readonly) NSArray * commandHandlerBlocks;
@property BOOL isOverrideApp;
@property BOOL keepAlive;
@property(retain) NSData * nowPlayingArtworkData;
@property(retain) NSDictionary * nowPlayingInfo;
@property(readonly) struct _MROrigin { }* origin;
@property(copy) id playbackStateRequestHandler;
@property unsigned int routeDiscoveryMode;

- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (void)addCommandHandlerBlock:(id)arg1 forKey:(id)arg2;
- (BOOL)canBeNowPlayingApp;
- (id)commandHandlerBlocks;
- (void)dealloc;
- (id)initWithOrigin:(struct _MROrigin { }*)arg1;
- (BOOL)isOverrideApp;
- (BOOL)keepAlive;
- (id)nowPlayingArtworkData;
- (id)nowPlayingInfo;
- (struct _MROrigin { }*)origin;
- (id)playbackStateRequestHandler;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (unsigned int)routeDiscoveryMode;
- (void)setCanBeNowPlayingApp:(BOOL)arg1;
- (void)setIsOverrideApp:(BOOL)arg1;
- (void)setKeepAlive:(BOOL)arg1;
- (void)setNowPlayingArtworkData:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackStateRequestHandler:(id)arg1;
- (void)setRouteDiscoveryMode:(unsigned int)arg1;

@end