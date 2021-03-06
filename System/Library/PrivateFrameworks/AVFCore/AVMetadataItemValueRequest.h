//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMetadataItem, AVMetadataItemValueRequestInternal;

@interface AVMetadataItemValueRequest : NSObject
{
    AVMetadataItemValueRequestInternal *_valueRequest;	// 8 = 0x8
}

+ (id)metadataItemValueRequestWithMetadataItem:(id)arg1;	// IMP=0x000000000001e6d8
- (void)respondWithError:(id)arg1;	// IMP=0x000000000001e8e6
- (void)respondWithValue:(id)arg1;	// IMP=0x000000000001e8d2
- (void)respondWithValue:(id)arg1 dataType:(id)arg2;	// IMP=0x000000000001e85c
- (id)error;	// IMP=0x000000000001e84e
- (id)dataType;	// IMP=0x000000000001e840
- (id)value;	// IMP=0x000000000001e832
@property(readonly) __weak AVMetadataItem *metadataItem;
- (void)dealloc;	// IMP=0x000000000001e79b
- (id)initWithMetadataItem:(id)arg1;	// IMP=0x000000000001e707

@end

