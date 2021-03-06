//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFImage, SFPunchout, SFWatchListCardSection, SearchUIWatchListCardsManager;
@protocol SearchUIWatchListCardRowModelDelegate;

@interface SearchUIWatchListCardRowModel
{
    _Bool _hasLoaded;	// 8 = 0x8
    _Bool _hasError;	// 9 = 0x9
    id <SearchUIWatchListCardRowModelDelegate> _delegate;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    SFImage *_image;	// 32 = 0x20
    long long _buttonState;	// 40 = 0x28
    SFPunchout *_punchout;	// 48 = 0x30
    SearchUIWatchListCardsManager *_manager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a0651
@property(retain, nonatomic) SearchUIWatchListCardsManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property __weak id <SearchUIWatchListCardRowModelDelegate> delegate; // @synthesize delegate=_delegate;
- (int)separatorStyle;	// IMP=0x00000000000a04f5
- (_Bool)isDraggable;	// IMP=0x00000000000a04ed
- (_Bool)isTappable;	// IMP=0x00000000000a04db
- (id)punchouts;	// IMP=0x00000000000a0412
- (void)toggleAddToUpNext;	// IMP=0x00000000000a03d5
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4;	// IMP=0x00000000000a026a
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2;	// IMP=0x00000000000a01c1
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4;	// IMP=0x00000000000a0124

// Remaining properties
@property(retain, nonatomic) SFWatchListCardSection *cardSection; // @dynamic cardSection;

@end

