//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQKeynoteGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHKeynote : NSObject <GQKeynoteGenerator>
{
}

+ (Class)enterSlideDrawables:(id)arg1 state:(id)arg2;	// IMP=0x0000000000027ccc
+ (int)endSlide:(id)arg1 state:(id)arg2;	// IMP=0x0000000000027a53
+ (int)beginSlide:(id)arg1 state:(id)arg2;	// IMP=0x0000000000027938
+ (int)handleThemeStylesheet:(id)arg1 state:(id)arg2;	// IMP=0x000000000002792d
+ (int)handleSlideSize:(id)arg1 state:(id)arg2;	// IMP=0x0000000000027364
+ (int)endPresentation:(id)arg1 state:(id)arg2;	// IMP=0x00000000000272c5
+ (int)beginPresentation:(id)arg1 state:(id)arg2;	// IMP=0x00000000000272ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

