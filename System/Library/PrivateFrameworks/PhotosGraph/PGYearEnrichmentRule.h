//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemEnrichmentRule-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    NSObject<OS_os_log> *_loggingConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000483abe
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000483aae
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;	// IMP=0x0000000000483885
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;	// IMP=0x00000000004835c4
- (double)promotionScoreForHighlightItemList:(id)arg1;	// IMP=0x0000000000483441
- (id)initWithLoggingConnection:(id)arg1;	// IMP=0x00000000004833d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
