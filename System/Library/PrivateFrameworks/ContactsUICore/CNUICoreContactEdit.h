//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact;

@interface CNUICoreContactEdit : NSObject
{
    CNContact *_original;	// 8 = 0x8
    CNContact *_modified;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012547
@property(readonly, nonatomic) CNContact *modified; // @synthesize modified=_modified;
@property(readonly, nonatomic) CNContact *original; // @synthesize original=_original;
- (id)description;	// IMP=0x0000000000012447
- (unsigned long long)hash;	// IMP=0x000000000001234a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001224a
- (_Bool)modifiesContact:(id)arg1;	// IMP=0x0000000000012196
@property(readonly, nonatomic) _Bool originalAndModifiedDiffer;
- (id)editBySettingModifiedContact:(id)arg1;	// IMP=0x000000000001209c
- (id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2;	// IMP=0x0000000000011f2c
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000011f17

@end

