//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString;

@interface PHImportException : NSObject
{
    NSDate *_createDate;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSString *_sourceCodeFile;	// 32 = 0x20
    unsigned long long _lineNumber;	// 40 = 0x28
    NSError *_underlyingError;	// 48 = 0x30
}

+ (id)logForAllExceptions:(id)arg1;	// IMP=0x00000000001ff892
- (void).cxx_destruct;	// IMP=0x00000000001ff854
@property(readonly, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly, nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) NSString *sourceCodeFile; // @synthesize sourceCodeFile=_sourceCodeFile;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
- (id)description;	// IMP=0x00000000001ff58c
- (id)initWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char *)arg4 line:(unsigned long long)arg5;	// IMP=0x00000000001ff2e7

@end

