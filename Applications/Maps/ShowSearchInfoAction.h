//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SearchInfo;

__attribute__((visibility("hidden")))
@interface ShowSearchInfoAction
{
    SearchInfo *;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000009f9352
@property(retain, nonatomic) SearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x00100000009f9325
- (_Bool)isCompatibleWithNavigation;	// IMP=0x00100000009f9308
- (id)initWithSearchInfo:(id)arg1;	// IMP=0x00100000009f929a

@end
