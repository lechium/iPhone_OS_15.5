//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface RequestStore : NSObject
{
    NSObject<OS_dispatch_queue> *_fileAccessQueue;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001818a
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fileAccessQueue; // @synthesize fileAccessQueue=_fileAccessQueue;
- (id)_retrieveFile;	// IMP=0x0010000000017cae
- (void)_storeFileWithItems:(id)arg1;	// IMP=0x0010000000017800
- (id)_pathWithFileName:(id)arg1;	// IMP=0x0010000000017483
- (id)_filePath;	// IMP=0x0010000000017424
- (void)_deleteFile;	// IMP=0x0010000000017099
- (void)storeItems:(id)arg1;	// IMP=0x0010000000016ed3
- (id)items;	// IMP=0x0010000000016c2a
- (void)clearCache;	// IMP=0x0010000000016aa6
- (id)initWithFileName:(id)arg1;	// IMP=0x0010000000016a1f

@end
