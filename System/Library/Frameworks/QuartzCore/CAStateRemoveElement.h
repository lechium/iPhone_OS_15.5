//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CAStateRemoveElement
{
    NSString *_keyPath;	// 24 = 0x18
    id _object;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000255822
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)debugDescription;	// IMP=0x000000000025574f
- (void)dealloc;	// IMP=0x00000000002556d4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000255600
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000255559
- (_Bool)CAMLTypeSupportedForKey:(id)arg1;	// IMP=0x00000000002554dc
- (id)CAMLTypeForKey:(id)arg1;	// IMP=0x0000000000255434
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x0000000000255363
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000002552b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025523b
- (void)apply:(id)arg1;	// IMP=0x000000000025502e
- (_Bool)matches:(id)arg1;	// IMP=0x0000000000254fb9

@end
