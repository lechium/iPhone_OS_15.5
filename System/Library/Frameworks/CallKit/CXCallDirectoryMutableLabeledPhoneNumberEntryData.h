//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSCopying-Protocol.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData <NSCopying>
{
    NSMutableData *_mutablePhoneNumberData;	// 24 = 0x18
    NSMutableData *_mutableLabelData;	// 32 = 0x20
    NSMutableDictionary *_labelToLabelDataOffset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014b70
@property(retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset; // @synthesize labelToLabelDataOffset=_labelToLabelDataOffset;
@property(retain, nonatomic) NSMutableData *mutableLabelData; // @synthesize mutableLabelData=_mutableLabelData;
@property(retain, nonatomic) NSMutableData *mutablePhoneNumberData; // @synthesize mutablePhoneNumberData=_mutablePhoneNumberData;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014a22
- (_Bool)appendPhoneNumber:(long long)arg1 label:(id)arg2;	// IMP=0x0000000000014850
- (id)init;	// IMP=0x000000000001483c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001474f

@end

