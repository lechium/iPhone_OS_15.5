//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/TVMediaPlaybackManagerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TVMediaPlaybackManager;
@protocol TVPAVFPlayback, VUINowPlayingFeature, VUINowPlayingFeatureMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingFeatureMonitor : NSObject <TVMediaPlaybackManagerDelegate>
{
    struct {
        _Bool respondsToFeatureDidChangeState;
        _Bool respondsToActiveFeatureChangedFrom;
    } _delegateFlags;	// 8 = 0x8
    _Bool _observingElapsedTime;	// 10 = 0xa
    id <VUINowPlayingFeatureMonitorDelegate> _delegate;	// 16 = 0x10
    NSObject<TVPAVFPlayback> *_player;	// 24 = 0x18
    TVMediaPlaybackManager *_playbackManager;	// 32 = 0x20
    NSMutableSet *_features;	// 40 = 0x28
    NSMapTable *_featureDependencies;	// 48 = 0x30
    NSMapTable *_featureTokens;	// 56 = 0x38
    NSMapTable *_featureBoundaryInfos;	// 64 = 0x40
    NSMapTable *_featureTimers;	// 72 = 0x48
    id <VUINowPlayingFeature> _featureLastRequestedUI;	// 80 = 0x50
    NSMutableArray *_enabledUIModes;	// 88 = 0x58
    double _lastProcessedElapsedTime;	// 96 = 0x60
    NSMutableDictionary *_boundaryTimeObserverInfos;	// 104 = 0x68
    id _elapsedTimeObserverToken;	// 112 = 0x70
    NSMutableArray *_elapsedTimes;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000088815
@property(retain, nonatomic) NSMutableArray *elapsedTimes; // @synthesize elapsedTimes=_elapsedTimes;
@property(retain, nonatomic) id elapsedTimeObserverToken; // @synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken;
@property(retain, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos; // @synthesize boundaryTimeObserverInfos=_boundaryTimeObserverInfos;
@property(nonatomic) double lastProcessedElapsedTime; // @synthesize lastProcessedElapsedTime=_lastProcessedElapsedTime;
@property(nonatomic) _Bool observingElapsedTime; // @synthesize observingElapsedTime=_observingElapsedTime;
@property(retain, nonatomic) NSMutableArray *enabledUIModes; // @synthesize enabledUIModes=_enabledUIModes;
@property(retain, nonatomic) id <VUINowPlayingFeature> featureLastRequestedUI; // @synthesize featureLastRequestedUI=_featureLastRequestedUI;
@property(retain, nonatomic) NSMapTable *featureTimers; // @synthesize featureTimers=_featureTimers;
@property(retain, nonatomic) NSMapTable *featureBoundaryInfos; // @synthesize featureBoundaryInfos=_featureBoundaryInfos;
@property(retain, nonatomic) NSMapTable *featureTokens; // @synthesize featureTokens=_featureTokens;
@property(retain, nonatomic) NSMapTable *featureDependencies; // @synthesize featureDependencies=_featureDependencies;
@property(retain, nonatomic) NSMutableSet *features; // @synthesize features=_features;
@property(retain, nonatomic) TVMediaPlaybackManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property(nonatomic) __weak id <VUINowPlayingFeatureMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cleanUpEverything;	// IMP=0x00000000000884c0
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000000884ae
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000000008849c
- (void)_expireTimerFeaturesIfNeeded;	// IMP=0x0000000000087d0c
- (void)_setupTimerFeatureExpiration;	// IMP=0x00000000000879cb
- (_Bool)_isTimerFeatureExpired:(id)arg1;	// IMP=0x000000000008774c
- (void)_cancelTimerForFeature:(id)arg1;	// IMP=0x0000000000087656
- (void)_processTimerTriggeredFeature:(id)arg1;	// IMP=0x00000000000871de
- (_Bool)_needsUIForFeature:(id)arg1;	// IMP=0x000000000008715b
- (void)_processUserTriggeredFeature:(id)arg1 activate:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000086fd0
- (void)_removeAllObservedTokensForFeature:(id)arg1;	// IMP=0x0000000000086d57
- (void)_addObservedToken:(id)arg1 forFeature:(id)arg2;	// IMP=0x0000000000086b95
- (void)_removeTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2;	// IMP=0x00000000000868a8
- (void)_updateBoundaryObserverForFeature:(id)arg1 change:(id)arg2;	// IMP=0x000000000008677c
- (void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008660f
- (id)_observerInfoForFeature:(id)arg1 matchingTime:(double)arg2;	// IMP=0x000000000008638d
- (void)_processAnyTimeBoundFeatures;	// IMP=0x0000000000086219
- (void)_scheduleDeactivationOfTimeBoundFeature:(id)arg1;	// IMP=0x0000000000085e56
- (_Bool)_shouldActivateTimeBoundFeatureInitially:(id)arg1;	// IMP=0x0000000000085dd5
- (void)_processTimeBoundFeature:(id)arg1;	// IMP=0x000000000008587e
- (void)_processLastElapsedTime;	// IMP=0x000000000008515f
- (void)_processElapsedTime:(double)arg1;	// IMP=0x0000000000085053
- (void)_startObservingElapsedTime;	// IMP=0x0000000000084e5d
- (_Bool)_isElapsedTimeWithinFeatureTimeWindow:(id)arg1;	// IMP=0x0000000000084b95
- (void)_unregisterPlaybackStateNotification;	// IMP=0x0000000000084b06
- (void)_registerPlaybackStateChangeNotification;	// IMP=0x0000000000084a70
- (void)_deactivateFeature:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000847e8
- (void)_activateFeature:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000845c0
- (_Bool)_shouldAnimateFeature:(id)arg1;	// IMP=0x0000000000084526
- (_Bool)_isTimerTriggeredFeature:(id)arg1;	// IMP=0x00000000000844c8
- (_Bool)_isTVAdvisoryFeature:(id)arg1;	// IMP=0x00000000000844ac
- (_Bool)_isHybridFeature:(id)arg1;	// IMP=0x0000000000084490
- (_Bool)_isUserTriggeredFeature:(id)arg1;	// IMP=0x0000000000084474
- (_Bool)_isTimeBoundFeature:(id)arg1;	// IMP=0x0000000000084458
- (void)_processFeature:(id)arg1;	// IMP=0x00000000000843a0
- (_Bool)_hasActiveFeaturesInArray:(id)arg1;	// IMP=0x0000000000084311
- (_Bool)_hasAnyActiveFeature;	// IMP=0x00000000000842c9
- (id)_activeFeature;	// IMP=0x00000000000841e6
- (id)_timeBoundFeatures;	// IMP=0x0000000000084173
- (id)_activeFeatures;	// IMP=0x00000000000840c5
- (void)_playbackStateChangedNottificaiton:(id)arg1;	// IMP=0x0000000000083ff5
- (_Bool)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;	// IMP=0x0000000000083f7a
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(_Bool)arg2 animated:(_Bool)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000083d78
- (void)deactivateFeature:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000083cb1
- (void)enableUIMode:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000083b5b
- (void)removeFeaturesMatching:(id)arg1;	// IMP=0x0000000000083877
- (void)_cleanupFeature:(id)arg1;	// IMP=0x0000000000083660
- (void)removeFeature:(id)arg1;	// IMP=0x00000000000834b2
- (id)activeFeatureForType:(unsigned long long)arg1;	// IMP=0x0000000000083378
- (id)featuresForType:(unsigned long long)arg1;	// IMP=0x0000000000083263
- (void)addFeature:(id)arg1 withDependencyToPreferredFeatures:(id)arg2;	// IMP=0x00000000000830b8
- (void)addFeature:(id)arg1;	// IMP=0x0000000000082f7b
@property(readonly, nonatomic) NSArray *allFeatures;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000082edb
- (void)dealloc;	// IMP=0x0000000000082d41
- (id)init;	// IMP=0x0000000000082ba3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
