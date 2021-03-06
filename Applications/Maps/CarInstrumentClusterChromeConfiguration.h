//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CarInstrumentClusterChromeConfiguration : NSObject
{
    unsigned long long _showsHeadingIndicator;	// 8 = 0x8
    unsigned long long _showsSpeedLimit;	// 16 = 0x10
    unsigned long long _showsCards;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long showsCards; // @synthesize showsCards=_showsCards;
@property(readonly, nonatomic) unsigned long long showsSpeedLimit; // @synthesize showsSpeedLimit=_showsSpeedLimit;
@property(readonly, nonatomic) unsigned long long showsHeadingIndicator; // @synthesize showsHeadingIndicator=_showsHeadingIndicator;
- (id)description;	// IMP=0x00100000009b8272
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000009b81b7
- (id)initWithInstrumentClusterSceneSettings:(id)arg1;	// IMP=0x00100000009b80d0

@end

