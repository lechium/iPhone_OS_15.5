//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelTypeRegistry : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000000aad43
- (id)loadNeuralNetworkClasses:(_Bool)arg1 trainWithMLCompute:(_Bool)arg2;	// IMP=0x00000000000aacb0
- (Class)classForCompilingModelType:(int)arg1;	// IMP=0x00000000000aaa0c
- (id)classesForLoadingModelType:(int)arg1 isUpdatable:(_Bool)arg2 trainWithMLCompute:(_Bool)arg3;	// IMP=0x00000000000aa537
- (id)classesForLoadingModelType:(int)arg1;	// IMP=0x00000000000aa520
- (id)init;	// IMP=0x00000000000aa4f1

@end

