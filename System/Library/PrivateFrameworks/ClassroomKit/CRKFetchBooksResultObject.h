//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchBooksResultObject : CATTaskResultObject
{
    NSArray *_books;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000075a9
- (void).cxx_destruct;	// IMP=0x0000000000007760
@property(copy, nonatomic) NSArray *books; // @synthesize books=_books;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000076a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000075b1

@end

