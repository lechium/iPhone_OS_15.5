//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IntentsUI/INImageSizeProvider-Protocol.h>

@class NSString;

@interface INUIImageSizeProvider : NSObject <INImageSizeProvider>
{
}

+ (id)downscaledPNGImageForImage:(id)arg1 size:(CDStruct_c3b9c2ee)arg2 error:(id *)arg3;	// IMP=0x0000000000005b16
+ (CDStruct_c3b9c2ee)imageSizeForImage:(id)arg1;	// IMP=0x000000000000591a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
