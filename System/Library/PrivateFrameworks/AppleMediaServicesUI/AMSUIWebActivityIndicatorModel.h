//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebModelInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebActivityIndicatorModel : NSObject <AMSUIWebModelInterface>
{
    _Bool _animate;	// 8 = 0x8
}

@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000005a706

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

