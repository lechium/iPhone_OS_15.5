//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipFileDescriptorWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_accessGroup;	// 8 = 0x8
    int _fileDescriptor;	// 16 = 0x10
    id <TSUReadChannel> _readChannel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b7459
@property(readonly, nonatomic) id <TSUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void)waitForAccessToEnd;	// IMP=0x00000000002b7431
- (void)endAccess;	// IMP=0x00000000002b7423
- (void)beginAccess;	// IMP=0x00000000002b7415
- (void)dealloc;	// IMP=0x00000000002b73d3
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;	// IMP=0x00000000002b72b2
- (id)init;	// IMP=0x00000000002b7189

@end

