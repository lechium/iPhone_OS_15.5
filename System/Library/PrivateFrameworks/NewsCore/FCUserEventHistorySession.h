//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface FCUserEventHistorySession : NSObject
{
    NSString *_fileName;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSNumber *_sizeNumber;	// 40 = 0x28
}

+ (id)dateFromSessionID:(id)arg1;	// IMP=0x000000000016e178
- (void).cxx_destruct;	// IMP=0x000000000016ebb7
@property(retain, nonatomic) NSNumber *sizeNumber; // @synthesize sizeNumber=_sizeNumber;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)description;	// IMP=0x000000000016ea55
- (id)compressedData;	// IMP=0x000000000016e88b
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) long long size;
- (id)initWithSessionID:(id)arg1 path:(id)arg2;	// IMP=0x000000000016e387

@end
