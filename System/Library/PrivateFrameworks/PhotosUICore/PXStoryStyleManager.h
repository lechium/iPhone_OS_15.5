//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableStyleManager-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSArray, NSObject, NSString, PXStoryRecipeManager, PXStoryStyleConfiguration, PXStoryStyleConfigurationList, PXStoryStyleSelectionDataSource, PXUpdater;
@protocol OS_dispatch_queue, PXAudioCueProvider, PXAudioCueSource, PXStoryColorGradingRepository, PXStoryErrorReporter, PXStoryStyle, PXStoryStyleProducer;

@interface PXStoryStyleManager <PXStoryMutableStyleManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>
{
    _Bool _isCurrentStyleFinal;	// 8 = 0x8
    _Bool _areSelectionDataSourceStylesFinal;	// 9 = 0x9
    _Bool _areStylesFinal;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_storyQueue;	// 16 = 0x10
    unsigned long long _changesOrigin;	// 24 = 0x18
    PXStoryRecipeManager *_recipeManager;	// 32 = 0x20
    id <PXStoryColorGradingRepository> _colorGradingRepository;	// 40 = 0x28
    id <PXStoryStyle> _currentStyle;	// 48 = 0x30
    unsigned long long _currentStyleAttributes;	// 56 = 0x38
    PXStoryStyleSelectionDataSource *_selectionDataSource;	// 64 = 0x40
    unsigned long long _selectionDataSourceStylesAttributes;	// 72 = 0x48
    double _selectionFocus;	// 80 = 0x50
    id <PXStoryErrorReporter> _errorReporter;	// 88 = 0x58
    PXUpdater *_updater;	// 96 = 0x60
    id <PXStoryStyleProducer> _styleProducer;	// 104 = 0x68
    PXStoryStyleConfigurationList *_styleConfigurationList;	// 112 = 0x70
    unsigned long long _stylesAttributes;	// 120 = 0x78
    id <PXAudioCueSource> _cueSource;	// 128 = 0x80
    long long _cueRequestID;	// 136 = 0x88
    PXStoryStyleConfiguration *_currentStyleInfo;	// 144 = 0x90
    NSArray *_predefinedStyleInfos;	// 152 = 0x98
    id <PXAudioCueProvider> _cueProvider;	// 160 = 0xa0
    CDStruct_aa11df03 _styleOptions;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000059e3b3
@property(retain, nonatomic) id <PXAudioCueProvider> cueProvider; // @synthesize cueProvider=_cueProvider;
@property(copy, nonatomic) NSArray *predefinedStyleInfos; // @synthesize predefinedStyleInfos=_predefinedStyleInfos;
@property(retain, nonatomic) PXStoryStyleConfiguration *currentStyleInfo; // @synthesize currentStyleInfo=_currentStyleInfo;
@property(nonatomic) long long cueRequestID; // @synthesize cueRequestID=_cueRequestID;
@property(retain, nonatomic) id <PXAudioCueSource> cueSource; // @synthesize cueSource=_cueSource;
@property(nonatomic) _Bool areStylesFinal; // @synthesize areStylesFinal=_areStylesFinal;
@property(nonatomic) unsigned long long stylesAttributes; // @synthesize stylesAttributes=_stylesAttributes;
@property(retain, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList; // @synthesize styleConfigurationList=_styleConfigurationList;
@property(readonly, nonatomic) CDStruct_aa11df03 styleOptions; // @synthesize styleOptions=_styleOptions;
@property(readonly, nonatomic) id <PXStoryStyleProducer> styleProducer; // @synthesize styleProducer=_styleProducer;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) double selectionFocus; // @synthesize selectionFocus=_selectionFocus;
@property(nonatomic) _Bool areSelectionDataSourceStylesFinal; // @synthesize areSelectionDataSourceStylesFinal=_areSelectionDataSourceStylesFinal;
@property(nonatomic) unsigned long long selectionDataSourceStylesAttributes; // @synthesize selectionDataSourceStylesAttributes=_selectionDataSourceStylesAttributes;
@property(readonly, nonatomic) PXStoryStyleSelectionDataSource *selectionDataSource; // @synthesize selectionDataSource=_selectionDataSource;
@property(readonly, nonatomic) _Bool isCurrentStyleFinal; // @synthesize isCurrentStyleFinal=_isCurrentStyleFinal;
@property(readonly, nonatomic) unsigned long long currentStyleAttributes; // @synthesize currentStyleAttributes=_currentStyleAttributes;
@property(readonly, nonatomic) id <PXStoryStyle> currentStyle; // @synthesize currentStyle=_currentStyle;
@property(readonly, nonatomic) id <PXStoryColorGradingRepository> colorGradingRepository; // @synthesize colorGradingRepository=_colorGradingRepository;
@property(readonly, nonatomic) PXStoryRecipeManager *recipeManager; // @synthesize recipeManager=_recipeManager;
@property(readonly, nonatomic) unsigned long long changesOrigin; // @synthesize changesOrigin=_changesOrigin;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x000000000059e193
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000059e136
- (void)_updateSelectionDataSourceStylesAttributes;	// IMP=0x000000000059e0d5
- (void)_invalidateSelectionDataSourceAttributes;	// IMP=0x000000000059e091
- (void)_updateSelectionDataSource;	// IMP=0x000000000059dd6f
- (void)_invalidateSelectionDataSource;	// IMP=0x000000000059dd2b
- (void)_updateCurrentStyleAttributes;	// IMP=0x000000000059dc91
- (void)_invalidateCurrentStyleAttributes;	// IMP=0x000000000059dc4d
- (void)_updateCurrentStyle;	// IMP=0x000000000059dad9
- (void)_updateCurrentStyleInfo;	// IMP=0x000000000059d7cc
- (void)_invalidateCurrentStyleInfo;	// IMP=0x000000000059d788
- (void)_handleCueSource:(id)arg1 error:(id)arg2 requestID:(long long)arg3;	// IMP=0x000000000059d6a0
- (void)_updateCueSource;	// IMP=0x000000000059d477
- (void)_invalidateCueSource;	// IMP=0x000000000059d433
- (void)_invalidateCurrentStyle;	// IMP=0x000000000059d3ef
- (void)_updateStylesAttributes;	// IMP=0x000000000059d396
- (void)_invalidateStylesAttributes;	// IMP=0x000000000059d352
- (void)_updatePredefinedStyleInfos;	// IMP=0x000000000059d086
- (void)_invalidatePredefinedStyleInfos;	// IMP=0x000000000059d042
- (void)_updateStyleConfigurationList;	// IMP=0x000000000059cfac
- (void)_invalidateStyleConfigurationList;	// IMP=0x000000000059cf68
- (void)_setNeedsUpdate;	// IMP=0x000000000059cf54
- (void)setSelectionFocus:(double)arg1;	// IMP=0x000000000059ce73
- (void)applyStyleAtIndex:(long long)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000059cc8c
- (void)applyFocusedStyle;	// IMP=0x000000000059cc2e
- (void)applyFocusedStyleWithCustomizedSongResource:(id)arg1;	// IMP=0x000000000059c919
- (void)applyFocusedStyleWithCustomizedColorGradeKind:(long long)arg1;	// IMP=0x000000000059c6d3
- (void)didPerformChanges;	// IMP=0x000000000059c669
@property(readonly, nonatomic) _Bool focusedStyleIsCurrentStyle;
@property(readonly, nonatomic) long long focusedStyleIndex;
- (void)setSelectionDataSource:(id)arg1;	// IMP=0x000000000059c4df
- (void)setIsCurrentStyleFinal:(_Bool)arg1;	// IMP=0x000000000059c2ca
- (void)setCurrentStyleAttributes:(unsigned long long)arg1;	// IMP=0x000000000059c105
- (void)setCurrentStyle:(id)arg1;	// IMP=0x000000000059c090
- (void)didEndChangeHandling;	// IMP=0x000000000059bc39
- (void)performChanges:(CDUnknownBlockType)arg1 origin:(unsigned long long)arg2;	// IMP=0x000000000059bb1e
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000059baa2
- (id)initWithRecipeManager:(id)arg1 errorReporter:(id)arg2;	// IMP=0x000000000059b786
- (id)init;	// IMP=0x000000000059b70c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

