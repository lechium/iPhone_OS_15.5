//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthRecordsUI/CLLocationManagerDelegate-Protocol.h>
#import <HealthRecordsUI/HRWDUserActivityResponder-Protocol.h>
#import <HealthRecordsUI/UISearchBarDelegate-Protocol.h>
#import <HealthRecordsUI/UISearchControllerDelegate-Protocol.h>
#import <HealthRecordsUI/UISearchResultsUpdating-Protocol.h>

@class CLLocation, CLLocationManager, HKClinicalAccountStore, HRProfile, HRUITableViewSectionConfiguration, HRWDSpinnerView, NSArray, NSIndexPath, NSLayoutConstraint, NSMutableDictionary, NSMutableOrderedSet, NSSet, NSString, NSTimer, UISearchController, UIView, UIViewController, WDClinicalGatewayProxy, WDClinicalOnboardingNoGeoView, WDClinicalSampleAccountsLoader, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingViewController : HKTableViewController <CLLocationManagerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, HRWDUserActivityResponder>
{
    long long _searchesInFlight;	// 8 = 0x8
    NSTimer *_searchTimer;	// 16 = 0x10
    UISearchController *_searchController;	// 24 = 0x18
    CLLocationManager *_locationManager;	// 32 = 0x20
    CLLocation *_location;	// 40 = 0x28
    _Bool _showProviderNotFound;	// 48 = 0x30
    _Bool _showOnlyClinicalSharingCapableProviders;	// 49 = 0x31
    _Bool _searchInFlight;	// 50 = 0x32
    _Bool _hasCompletedAtLeastOneFetch;	// 51 = 0x33
    _Bool _locationEnabled;	// 52 = 0x34
    HRProfile *_profile;	// 56 = 0x38
    NSArray *_alreadyConnectedAccounts;	// 64 = 0x40
    NSSet *_alreadyConnectedBrands;	// 72 = 0x48
    NSSet *_alreadySharingBrands;	// 80 = 0x50
    NSMutableOrderedSet *_alreadySharingSearchResults;	// 88 = 0x58
    NSMutableOrderedSet *_supportedSearchResults;	// 96 = 0x60
    NSMutableOrderedSet *_unsupportedSearchResults;	// 104 = 0x68
    NSString *_searchQuery;	// 112 = 0x70
    NSArray *_searchTerms;	// 120 = 0x78
    NSMutableDictionary *_resultsCache;	// 128 = 0x80
    long long _nextFrom;	// 136 = 0x88
    HRUITableViewSectionConfiguration *_sectionConfiguration;	// 144 = 0x90
    UIView *_noContentParentView;	// 152 = 0x98
    _UIContentUnavailableView *_noLocationsView;	// 160 = 0xa0
    NSLayoutConstraint *_noContentTopConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_noContentBottomConstraint;	// 176 = 0xb0
    WDClinicalOnboardingNoGeoView *_noGeoView;	// 184 = 0xb8
    UIView *_providerNotFoundView;	// 192 = 0xc0
    UIViewController *_dismissalViewController;	// 200 = 0xc8
    NSIndexPath *_spinnerIndexPath;	// 208 = 0xd0
    HRWDSpinnerView *_spinnerView;	// 216 = 0xd8
    WDClinicalSampleAccountsLoader *_sampleAccountsLoader;	// 224 = 0xe0
    WDClinicalGatewayProxy *_pendingGatewayProxy;	// 232 = 0xe8
    HKClinicalAccountStore *_accountStore;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x000000000000a294
@property(retain, nonatomic) HKClinicalAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) WDClinicalGatewayProxy *pendingGatewayProxy; // @synthesize pendingGatewayProxy=_pendingGatewayProxy;
@property(retain, nonatomic) WDClinicalSampleAccountsLoader *sampleAccountsLoader; // @synthesize sampleAccountsLoader=_sampleAccountsLoader;
@property(retain, nonatomic) HRWDSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) NSIndexPath *spinnerIndexPath; // @synthesize spinnerIndexPath=_spinnerIndexPath;
@property(nonatomic) __weak UIViewController *dismissalViewController; // @synthesize dismissalViewController=_dismissalViewController;
@property(retain, nonatomic) UIView *providerNotFoundView; // @synthesize providerNotFoundView=_providerNotFoundView;
@property(retain, nonatomic) WDClinicalOnboardingNoGeoView *noGeoView; // @synthesize noGeoView=_noGeoView;
@property(nonatomic) __weak NSLayoutConstraint *noContentBottomConstraint; // @synthesize noContentBottomConstraint=_noContentBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *noContentTopConstraint; // @synthesize noContentTopConstraint=_noContentTopConstraint;
@property(retain, nonatomic) _UIContentUnavailableView *noLocationsView; // @synthesize noLocationsView=_noLocationsView;
@property(retain, nonatomic) UIView *noContentParentView; // @synthesize noContentParentView=_noContentParentView;
@property(nonatomic) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
@property(nonatomic) _Bool hasCompletedAtLeastOneFetch; // @synthesize hasCompletedAtLeastOneFetch=_hasCompletedAtLeastOneFetch;
@property(retain, nonatomic) HRUITableViewSectionConfiguration *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(nonatomic) _Bool searchInFlight; // @synthesize searchInFlight=_searchInFlight;
@property(nonatomic) long long nextFrom; // @synthesize nextFrom=_nextFrom;
@property(readonly, nonatomic) NSMutableDictionary *resultsCache; // @synthesize resultsCache=_resultsCache;
@property(copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSMutableOrderedSet *unsupportedSearchResults; // @synthesize unsupportedSearchResults=_unsupportedSearchResults;
@property(retain, nonatomic) NSMutableOrderedSet *supportedSearchResults; // @synthesize supportedSearchResults=_supportedSearchResults;
@property(retain, nonatomic) NSMutableOrderedSet *alreadySharingSearchResults; // @synthesize alreadySharingSearchResults=_alreadySharingSearchResults;
@property(copy, nonatomic) NSSet *alreadySharingBrands; // @synthesize alreadySharingBrands=_alreadySharingBrands;
@property(copy, nonatomic) NSSet *alreadyConnectedBrands; // @synthesize alreadyConnectedBrands=_alreadyConnectedBrands;
@property(copy, nonatomic) NSArray *alreadyConnectedAccounts; // @synthesize alreadyConnectedAccounts=_alreadyConnectedAccounts;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool showOnlyClinicalSharingCapableProviders; // @synthesize showOnlyClinicalSharingCapableProviders=_showOnlyClinicalSharingCapableProviders;
@property(nonatomic) _Bool showProviderNotFound; // @synthesize showProviderNotFound=_showProviderNotFound;
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000000009eb2
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000000009eac
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000009c6d
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000009b3f
- (id)accountSearchResultAtIndexPath:(id)arg1;	// IMP=0x00000000000098c2
- (id)providerSearchResultAtIndexPath:(id)arg1;	// IMP=0x00000000000095cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000933d
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000092c7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000911a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000090cb
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000008ff8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000008f6d
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000008ea7
- (void)_suggestNewProviders;	// IMP=0x0000000000008c9a
- (void)_presentError:(id)arg1;	// IMP=0x0000000000008a48
- (void)dismiss:(id)arg1;	// IMP=0x000000000000899c
- (void)_proceedWithAlreadyConnectedAccount:(id)arg1;	// IMP=0x0000000000008818
- (void)_presentLoginForAlreadyConnectedAccount:(id)arg1;	// IMP=0x000000000000837c
- (void)_beginLoadingAlreadyConnectedAccountsIfNecessary;	// IMP=0x0000000000007c67
- (_Bool)_isSimulator;	// IMP=0x0000000000007c5f
@property(readonly, nonatomic) _Bool hasSearchResults;
- (_Bool)hasSearchTerm;	// IMP=0x0000000000007b2a
@property(readonly, nonatomic) _Bool couldFetchAdditionalResults;
- (void)_hideNoGeoView;	// IMP=0x0000000000007afd
- (void)_showNoGeoView;	// IMP=0x0000000000007a46
- (id)_createNoGeoView;	// IMP=0x0000000000007a11
@property(readonly, nonatomic) _Bool showingNoGeoView;
- (void)_hideSpinnerView;	// IMP=0x0000000000007998
- (void)_showSpinnerView;	// IMP=0x00000000000078ce
- (id)_createSpinnerView;	// IMP=0x0000000000007819
@property(readonly, nonatomic) _Bool showingMainSpinner;
- (void)_hideNoLocationsView;	// IMP=0x00000000000077c7
- (void)_showNoLocationsViewIfNeeded;	// IMP=0x00000000000076e7
- (id)_createNoLocationsView;	// IMP=0x00000000000075fe
@property(readonly, nonatomic) _Bool showingNoLocations;
- (void)_showNoContentView:(id)arg1;	// IMP=0x0000000000006bb0
- (id)_createNoContentParentView;	// IMP=0x0000000000006b54
- (void)_updateNoContentViewConstraints;	// IMP=0x0000000000006935
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;	// IMP=0x00000000000068c4
- (id)_mutableOrderedSetWithSampleAccountsForQuery:(id)arg1;	// IMP=0x00000000000067fe
- (id)_emptyMutableOrderedSet;	// IMP=0x00000000000067d0
- (void)_resetSearchResults;	// IMP=0x000000000000671f
- (id)_cacheKeyForSearchQuery:(id)arg1;	// IMP=0x00000000000066d2
- (void)_didFetchResultsForQuery:(id)arg1 searchResultsPage:(id)arg2 error:(id)arg3;	// IMP=0x0000000000005d1b
- (void)_searchResultsForQuery:(id)arg1 from:(long long)arg2;	// IMP=0x0000000000005960
- (void)_searchUsingQuery:(id)arg1;	// IMP=0x00000000000055cd
- (void)_presentInitialResultsIfNecessary;	// IMP=0x000000000000558f
- (void)_cancelSearch;	// IMP=0x00000000000054bb
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000005322
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0000000000005310
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000000000052d4
- (void)didPresentSearchController:(id)arg1;	// IMP=0x00000000000052ce
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000005205
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000005133
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00000000000050f1
- (void)_configureDeniedAuthorization;	// IMP=0x000000000000509a
- (void)_disableLocationAwareness;	// IMP=0x000000000000501a
- (void)_configureLocationServices;	// IMP=0x0000000000004e99
- (void)_updateTableHeaderViewHeight;	// IMP=0x0000000000004d08
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000004cc7
- (void)_configureProviderNotFoundView;	// IMP=0x0000000000004c00
- (void)reloadData;	// IMP=0x00000000000047e4
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000000047d9
- (void)_loadGatewayProxyForDeeplinking:(id)arg1;	// IMP=0x0000000000004266
- (void)_cacheFeaturedBrandLogos;	// IMP=0x0000000000004175
- (void)_configureTableViewCells;	// IMP=0x0000000000004066
- (void)_configureSearchController;	// IMP=0x0000000000003f02
- (void)_configureNavigationItems;	// IMP=0x0000000000003de4
- (void)_configureLeftNavigationItemAsCancel;	// IMP=0x0000000000003d5f
- (id)_providerNotFoundExplanationMessage;	// IMP=0x0000000000003d1b
- (void)_applicationDidBecomeActive;	// IMP=0x0000000000003ce8
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000003c91
- (void)viewDidLoad;	// IMP=0x0000000000003b6c
- (void)loadView;	// IMP=0x0000000000003981
- (_Bool)definesPresentationContext;	// IMP=0x0000000000003979
- (id)initWithProfile:(id)arg1 gatewayProxy:(id)arg2;	// IMP=0x0000000000003859
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000003845

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

