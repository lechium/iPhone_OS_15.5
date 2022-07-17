//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString, SGIdentityKey;

@interface SGContactDetailKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
}

+ (_Bool)isSupportedEntityType:(long long)arg1;	// IMP=0x0000000000219ba3
+ (id)prefixForForIdentityKey:(id)arg1;	// IMP=0x0000000000219b4e
- (void).cxx_destruct;	// IMP=0x0000000000219b1b
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToContactDetailKey:(id)arg1;	// IMP=0x00000000002199c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000219958
- (id)initWithIdentityKey:(id)arg1 label:(id)arg2 normalizedValue:(id)arg3;	// IMP=0x00000000002198a1
- (id)serialize;	// IMP=0x0000000000219832
- (id)initWithSerialized:(id)arg1;	// IMP=0x00000000002195fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
