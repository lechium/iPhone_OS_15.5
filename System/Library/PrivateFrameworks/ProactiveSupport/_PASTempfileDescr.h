//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying>
{
    int _fd;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
}

+ (id)tempfileDescrWithFd:(int)arg1 path:(id)arg2;	// IMP=0x000000000004379c
- (void).cxx_destruct;	// IMP=0x000000000004378c
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) int fd; // @synthesize fd=_fd;
- (id)init;	// IMP=0x0000000000043773
- (unsigned long long)hash;	// IMP=0x0000000000043744
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000436dc
- (_Bool)isEqualToTempfileDescr:(id)arg1;	// IMP=0x00000000000435ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000435f4
- (id)initWithFd:(int)arg1 path:(id)arg2;	// IMP=0x0000000000043505

@end

