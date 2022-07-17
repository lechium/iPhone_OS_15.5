//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapService, NSString, NavigationSession;

__attribute__((visibility("hidden")))
@interface NavigationIntentCapturer : NSObject
{
    MKMapService *_mapService;	// 8 = 0x8
    NavigationSession *_navigationSession;	// 16 = 0x10
}

+ (long long)creationPreference;	// IMP=0x00200000007bd9f0
- (void).cxx_destruct;	// IMP=0x00200000007be073
@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MKMapService *mapService; // @synthesize mapService=_mapService;
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x00100000007be059
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x00100000007be053
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00100000007bdf87
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000007bdf15
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000007bdf0f
- (void)captureUserAction:(int)arg1;	// IMP=0x00100000007bdc94
- (void)captureStartNavigationIntent;	// IMP=0x00100000007bd9fb
- (id)initWithMapService:(id)arg1;	// IMP=0x00100000007bd985

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
