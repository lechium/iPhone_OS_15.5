//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol TXRBuffer;

@interface TXRImageInfo : NSObject
{
    unsigned long long _offset;	// 8 = 0x8
    id <TXRBuffer> _buffer;	// 16 = 0x10
    unsigned long long _bytesPerRow;	// 24 = 0x18
    unsigned long long _bytesPerImage;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c5a6f
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long bytesPerImage; // @synthesize bytesPerImage=_bytesPerImage;
@property(nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(retain, nonatomic) id <TXRBuffer> buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;

@end
