//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKModifyWebSharingOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDsToShare;	// 8 = 0x8
    NSArray *_recordIDsToUnshare;	// 16 = 0x10
    NSArray *_recordIDsToShareReadWrite;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000541d8
- (void).cxx_destruct;	// IMP=0x00000000000545a8
@property(retain, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
@property(retain, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property(retain, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005429a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000541e0

@end
