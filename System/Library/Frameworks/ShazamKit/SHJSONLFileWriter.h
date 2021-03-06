//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SHDataStream;

__attribute__((visibility("hidden")))
@interface SHJSONLFileWriter : NSObject
{
    NSURL *_destination;	// 8 = 0x8
    id <SHDataStream> _outputStream;	// 16 = 0x10
}

+ (id)dataForJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000143c4
- (void).cxx_destruct;	// IMP=0x00000000000147f0
@property(readonly, nonatomic) id <SHDataStream> outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSURL *destination; // @synthesize destination=_destination;
- (void)linkDataStream:(id)arg1;	// IMP=0x00000000000146e4
- (id)streamForWritingToURL:(id)arg1 withCompression:(int)arg2;	// IMP=0x00000000000145d3
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000000014371
- (_Bool)writeObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000142bc
- (id)initWithDestination:(id)arg1 compression:(int)arg2;	// IMP=0x000000000001421d

@end

