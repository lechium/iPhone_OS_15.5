//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface HPdetector_SceneClassifier_B238Input : NSObject
{
    MLMultiArray *_imageDescriptors;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001ebaa2
@property(retain, nonatomic) MLMultiArray *imageDescriptors; // @synthesize imageDescriptors=_imageDescriptors;
- (id)featureValueForName:(id)arg1;	// IMP=0x00100000001eba2e
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImageDescriptors:(id)arg1;	// IMP=0x00100000001eb9a3

@end
