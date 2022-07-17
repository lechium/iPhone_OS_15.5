//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PASDatabaseJournalFile : NSObject
{
    NSString *_path;	// 8 = 0x8
    unsigned long long _len;	// 16 = 0x10
    unsigned long long _readCursor;	// 24 = 0x18
    int _fd;	// 32 = 0x20
    _Bool _written;	// 36 = 0x24
    _Bool _dead;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x0000000000033401
- (id)description;	// IMP=0x000000000003338c
- (void)unlink;	// IMP=0x0000000000033228
- (void)clear;	// IMP=0x0000000000033177
- (id)read;	// IMP=0x0000000000032d3d
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isFullyRead;
- (void)write:(id)arg1;	// IMP=0x0000000000032990
- (void)dealloc;	// IMP=0x0000000000032952
- (void)destroyAndUnlinkIfEmpty;	// IMP=0x000000000003291c
- (void)destroy;	// IMP=0x00000000000328f5
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000326a6
- (id)init;	// IMP=0x00000000000326a0

@end
