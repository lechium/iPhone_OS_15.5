//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXPresentation : NSObject
{
}

+ (id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(_Bool)arg5 delegate:(id)arg6;	// IMP=0x00000000001c7760
+ (void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2;	// IMP=0x00000000001c9489
+ (void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x000000000044fb38
+ (struct CGSize)readSizeFromChildOfElement:(struct _xmlNode *)arg1 childName:(const char *)arg2 state:(id)arg3;	// IMP=0x000000000044fa4b

@end

