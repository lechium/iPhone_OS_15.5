//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ASFileDownloadConsumer
{
    int _fd;	// 24 = 0x18
}

- (void)finish;	// IMP=0x0020000000006b87
- (void)suspend;	// IMP=0x0010000000006b81
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000691d
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x0010000000006836
- (_Bool)_openOutputFile;	// IMP=0x00100000000066be
- (void)dealloc;	// IMP=0x001000000000667a
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000006612

@end
