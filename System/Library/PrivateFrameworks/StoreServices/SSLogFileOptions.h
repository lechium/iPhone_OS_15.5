//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying>
{
    NSString *_directoryPath;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    long long _maxNumberOfLogFiles;	// 24 = 0x18
    unsigned long long _maxSizeInBytes;	// 32 = 0x20
}

@property(nonatomic) long long maxNumberOfLogFiles; // @synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles;
@property(nonatomic) unsigned long long maxLogFileSize; // @synthesize maxLogFileSize=_maxSizeInBytes;
@property(copy, nonatomic) NSString *logFileBaseName; // @synthesize logFileBaseName=_fileName;
@property(copy, nonatomic) NSString *logDirectoryPath; // @synthesize logDirectoryPath=_directoryPath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002473d
- (void)dealloc;	// IMP=0x00000000000246f3
- (id)init;	// IMP=0x00000000000246b4

@end

