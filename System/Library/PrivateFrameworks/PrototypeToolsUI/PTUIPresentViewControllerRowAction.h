//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTRowAction.h>

@interface PTUIPresentViewControllerRowAction : PTRowAction
{
    CDUnknownBlockType _viewControllerCreator;	// 8 = 0x8
}

+ (id)actionWithViewControllerCreator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008f9a
- (void).cxx_destruct;	// IMP=0x0000000000009121
@property(readonly, nonatomic) CDUnknownBlockType viewControllerCreator; // @synthesize viewControllerCreator=_viewControllerCreator;
- (CDUnknownBlockType)defaultHandler;	// IMP=0x0000000000009011
- (_Bool)deselectsRowOnSuccess;	// IMP=0x0000000000009009

@end
