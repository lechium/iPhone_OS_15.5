//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol BSInvalidatable;

@interface _BKMousePointerServerClientPerDisplay : NSObject
{
    id <BSInvalidatable> _renderingAssertion;	// 8 = 0x8
    id <BSInvalidatable> _modelUpdateAssertion;	// 16 = 0x10
    NSMutableDictionary *_buttonDownRepositionUniqueIdentifierToAssertionMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003b60
@property(retain, nonatomic) NSMutableDictionary *buttonDownRepositionUniqueIdentifierToAssertionMap; // @synthesize buttonDownRepositionUniqueIdentifierToAssertionMap=_buttonDownRepositionUniqueIdentifierToAssertionMap;
@property(retain, nonatomic) id <BSInvalidatable> modelUpdateAssertion; // @synthesize modelUpdateAssertion=_modelUpdateAssertion;
@property(retain, nonatomic) id <BSInvalidatable> renderingAssertion; // @synthesize renderingAssertion=_renderingAssertion;

@end
