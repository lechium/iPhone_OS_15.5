//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoDecoderDelegate-Protocol.h>

@class NSString;

@interface HMIVideoDecoderDelegateAdapter : HMFObject <HMIVideoDecoderDelegate>
{
    CDUnknownBlockType _decoderDidDecodeSampleBuffer;	// 8 = 0x8
    CDUnknownBlockType _decoderDidFailWithError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c0f04
@property(copy) CDUnknownBlockType decoderDidFailWithError; // @synthesize decoderDidFailWithError=_decoderDidFailWithError;
@property(copy) CDUnknownBlockType decoderDidDecodeSampleBuffer; // @synthesize decoderDidDecodeSampleBuffer=_decoderDidDecodeSampleBuffer;
- (void)decoder:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000c0e0f
- (void)decoder:(id)arg1 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000c0d80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
