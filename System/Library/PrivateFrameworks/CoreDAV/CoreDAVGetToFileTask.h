//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileHandle;

@interface CoreDAVGetToFileTask
{
    NSFileHandle *_destinationFile;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000050a6c
@property(retain, nonatomic) NSFileHandle *destinationFile; // @synthesize destinationFile=_destinationFile;
- (_Bool)shouldLogResponseBody;	// IMP=0x0000000000050a3f
- (id)copyDefaultParserForContentType:(id)arg1;	// IMP=0x00000000000509da
- (id)initWithURL:(id)arg1 destinationFile:(id)arg2;	// IMP=0x0000000000050962

@end

