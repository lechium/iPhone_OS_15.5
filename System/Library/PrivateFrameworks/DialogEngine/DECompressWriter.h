//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@protocol DEWriter;

@interface DECompressWriter : NSObject <DEWriter>
{
    _Bool _compressed;	// 8 = 0x8
    _Bool _streamInitialized;	// 9 = 0x9
    _Bool _streamEnded;	// 10 = 0xa
    NSObject<DEWriter> *_writer;	// 16 = 0x10
    struct z_stream_s _stream;	// 24 = 0x18
}

+ (_Bool)isCompressed:(id)arg1;	// IMP=0x000000000010cd2b
- (void).cxx_destruct;	// IMP=0x000000000010d3d6
@property(nonatomic) _Bool streamEnded; // @synthesize streamEnded=_streamEnded;
@property(nonatomic) _Bool streamInitialized; // @synthesize streamInitialized=_streamInitialized;
@property(nonatomic) struct z_stream_s stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSObject<DEWriter> *writer; // @synthesize writer=_writer;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (void)writeData:(id)arg1;	// IMP=0x000000000010d2a4
- (void)close;	// IMP=0x000000000010d200
- (id)compress:(id)arg1 finalize:(_Bool)arg2;	// IMP=0x000000000010cfbb
- (void)dealloc;	// IMP=0x000000000010cee0
- (id)init;	// IMP=0x000000000010cecb
- (id)initWithWriter:(id)arg1;	// IMP=0x000000000010cdc8

@end
