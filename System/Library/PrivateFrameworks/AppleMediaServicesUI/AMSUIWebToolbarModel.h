//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebModelInterface-Protocol.h>

@class AMSUIWebButtonModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebToolbarModel : NSObject <AMSUIWebModelInterface>
{
    AMSUIWebButtonModel *_leftButton;	// 8 = 0x8
    AMSUIWebButtonModel *_rightButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009ea8d
@property(retain, nonatomic) AMSUIWebButtonModel *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) AMSUIWebButtonModel *leftButton; // @synthesize leftButton=_leftButton;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000009e86f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
