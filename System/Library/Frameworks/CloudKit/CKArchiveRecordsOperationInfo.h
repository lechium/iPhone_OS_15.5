//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKArchiveRecordsOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b413
- (void).cxx_destruct;	// IMP=0x000000000002b5e9
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b4c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b41b

@end
