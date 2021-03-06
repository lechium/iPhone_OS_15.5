//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, NSData;

__attribute__((visibility("hidden")))
@interface SharingXPCHelperContactIcon
{
    CNContact *_contact;	// 8 = 0x8
    long long _iconIndex;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000cb45e
- (void).cxx_destruct;	// IMP=0x00200000000cb937
@property(readonly, nonatomic) long long iconIndex; // @synthesize iconIndex=_iconIndex;
@property(readonly, retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)description;	// IMP=0x00100000000cb878
- (id)contactIDs;	// IMP=0x00100000000cb728
@property(readonly, nonatomic) struct CGImage *icon;
@property(readonly, retain, nonatomic) NSData *iconData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000cb66e
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000cb594
- (id)initWithContact:(id)arg1 icon:(struct CGImage *)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x00100000000cb4fd
- (id)initWithContact:(id)arg1 iconData:(id)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x00100000000cb466

@end

