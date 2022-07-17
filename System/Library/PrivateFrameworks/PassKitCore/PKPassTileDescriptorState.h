//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSMutableCopying-Protocol.h>

@class NSString, PKPassTileState;

@interface PKPassTileDescriptorState : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _supported;	// 8 = 0x8
    _Bool _inProgress;	// 9 = 0x9
    long long _type;	// 16 = 0x10
    unsigned long long _enabled;	// 24 = 0x18
    NSString *_stateIdentifier;	// 32 = 0x20
    PKPassTileState *_stateOverride;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002648e8
@property(readonly, nonatomic, getter=isInProgress) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) PKPassTileState *stateOverride; // @synthesize stateOverride=_stateOverride;
@property(readonly, copy, nonatomic) NSString *stateIdentifier; // @synthesize stateIdentifier=_stateIdentifier;
@property(readonly, nonatomic, getter=isEnabled) unsigned long long enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqualToUnresolvedState:(id)arg1;	// IMP=0x0000000000264791
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000264751
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002646e7
- (id)initForType:(long long)arg1;	// IMP=0x000000000026469a
- (id)init;	// IMP=0x000000000026468c

@end
