//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface WKQLThumbnailLoadOperation : NSOperation
{
    struct RetainPtr<NSURL> _filePath;	// 8 = 0x8
    struct RetainPtr<NSString> _identifier;	// 16 = 0x10
    struct RetainPtr<NSFileWrapper> _fileWrapper;	// 24 = 0x18
    RetainPtr_337fe565 _thumbnail;	// 32 = 0x20
    _Bool _shouldWrite;	// 40 = 0x28
    _Bool _executing;	// 41 = 0x29
    _Bool _finished;	// 42 = 0x2a
}

- (id).cxx_construct;	// IMP=0x00000000000968eb
- (void).cxx_destruct;	// IMP=0x0000000000096865
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(readonly, getter=isAsynchronous) _Bool asynchronous;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, retain, nonatomic) UIImage *thumbnail;
- (void)start;	// IMP=0x0000000000096422
- (id)initWithURL:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000009636f
- (id)initWithAttachment:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000962c7

@end
