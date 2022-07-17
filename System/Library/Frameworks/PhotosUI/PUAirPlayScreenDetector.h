//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PUAirPlayScreenMap;
@protocol PUAirPlayScreenReceiver;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreenDetector : NSObject
{
    id <PUAirPlayScreenReceiver> _receiver;	// 8 = 0x8
    PUAirPlayScreenMap *__detectedScreensMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005c4cf
@property(retain, nonatomic, setter=_setDetectedScreensMap:) PUAirPlayScreenMap *_detectedScreensMap; // @synthesize _detectedScreensMap=__detectedScreensMap;
@property(nonatomic) __weak id <PUAirPlayScreenReceiver> receiver; // @synthesize receiver=_receiver;
- (void)_lostScreen:(id)arg1;	// IMP=0x000000000005c312
- (void)_detectedNewScreen:(id)arg1;	// IMP=0x000000000005c139
- (void)_setUpScreenNotifications;	// IMP=0x000000000005c07f
- (void)_scanForAvailableScreensIfNeeded;	// IMP=0x000000000005bdc9
- (_Bool)shouldIgnoreScreen:(id)arg1;	// IMP=0x000000000005bd7d
@property(readonly, nonatomic) NSArray *availableScreens;
- (id)init;	// IMP=0x000000000005bc9d

@end
