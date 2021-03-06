//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString;

@interface RequestThrottleRecord : NSObject
{
    NSError *_error;	// 8 = 0x8
    NSString *_externalVersionID;	// 16 = 0x10
    NSString *_itemID;	// 24 = 0x18
    NSDate *_requestDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002144cb
- (void).cxx_destruct;	// IMP=0x002000000021471b
@property(readonly) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000214615
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002144d3
- (unsigned long long)hash;	// IMP=0x00100000002144b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002143db
- (_Bool)matchesExternalVersionID:(id)arg1;	// IMP=0x0010000000214364
- (double)ageRelativeToDate:(id)arg1;	// IMP=0x00100000002142e9
- (id)initWithDate:(id)arg1 error:(id)arg2 itemID:(id)arg3 externalVersionID:(id)arg4;	// IMP=0x0010000000214212

@end

