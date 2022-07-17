//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ExternalDownloadManifest : NSObject
{
    NSArray *_invalidDownloads;	// 8 = 0x8
    NSArray *_validDownloads;	// 16 = 0x10
}

- (_Bool)_parsePropertyList:(id)arg1;	// IMP=0x002000000008b94b
@property(readonly) NSArray *validDownloads;
@property(readonly) NSArray *invalidDownloads;
- (void)dealloc;	// IMP=0x001000000008b8ed
- (id)initWithValidDownloads:(id)arg1 invalidDownloads:(id)arg2;	// IMP=0x001000000008b873
- (id)initWithPropertyList:(id)arg1;	// IMP=0x001000000008b7f3
- (id)init;	// IMP=0x001000000008b7df

@end
