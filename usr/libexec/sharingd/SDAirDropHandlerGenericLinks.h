//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSAppLink;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerGenericLinks
{
    LSAppLink *_appLink;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b4f0f
@property(retain, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (void)updatePossibleActions;	// IMP=0x00100000000b4c41
- (id)suitableContentsDescription;	// IMP=0x00100000000b4a0f
- (long long)transferTypes;	// IMP=0x00100000000b49da
- (_Bool)canHandleTransfer;	// IMP=0x00100000000b4440

@end

