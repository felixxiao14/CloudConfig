exec function fixquestitems()
{
	FixQuestItems();
}

function FixQuestItems()
{
	var journalManager : CWitcherJournalManager;
	var mapManager : CCommonMapManager;
	var journalEntry : CJournalBase;
	var entryStatus : EJournalStatus;
	var playerInv : CInventoryComponent;
	var questItems : array<SItemUniqueId>;
	var itemIdx : int;
	var itemName : name;
	
	playerInv = thePlayer.GetInventory();
	questItems = playerInv.GetItemsByTag( 'Quest' );
	if( questItems.Size() < 1 )
		return;
	journalManager = theGame.GetJournalManager();
	mapManager = theGame.GetCommonMapManager();

	for( itemIdx = 0; itemIdx < questItems.Size(); itemIdx += 1 )
	{
		itemName = playerInv.GetItemName( questItems[itemIdx] );
		journalEntry = NULL;
		switch( itemName )
		{
		
		// <1> reset by map pin status
		// REMOVE ALL

		case 'lw_cp13_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_mp_cp13' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_cb17_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_cb17_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_de6_scavenger_key':
			if( mapManager.IsEntityMapPinDisabled( 'de6_mp_nml' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_gr13_slavers_key':
		case 'lw_gr13_poppy_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_mp_gr13' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_gr29_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_mp_gr29' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_hs2_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_mp_hs2' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_sk20_chest_key':
			if( mapManager.IsEntityMapPinDisabled( 'sk20_seagull_island_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_sk29_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'sk29_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_sk41_prison_key':	// could not find
			if( mapManager.IsEntityMapPinDisabled( 'sk41_mp_skellige' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_sk86_old_mans_key':
			if( mapManager.IsEntityMapPinDisabled( 'sk86_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_sk90_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'sk90_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_sk103_chest_key':
			if( mapManager.IsEntityMapPinDisabled( 'sk103_mp_skl' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_tm12_cage_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_mp_tm12' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'lw_tm15_chest_key':
			if( mapManager.IsEntityMapPinDisabled( 'nml_mp_tm15' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'ep1_poi_12_note_b':
			if( mapManager.IsEntityMapPinDisabled( 'ep1_poi12_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_bar_a_02_key':
			if( mapManager.IsEntityMapPinDisabled( 'poi_bar_a_02_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_bar_a_03_note':
			if( mapManager.IsEntityMapPinDisabled( 'poi_bar_a_03_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_bar_a_12_note':
			if( mapManager.IsEntityMapPinDisabled( 'poi_bar_a_12_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_gor_c_03_note':
			if( mapManager.IsEntityMapPinDisabled( 'poi_gor_c_03_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_gor_d_05_note':
		case 'poi_gor_d_05_key':
			if( mapManager.IsEntityMapPinDisabled( 'poi_gor_d_05_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_gor_d_06_note02':
		case 'poi_gor_d_06_note04':
			if( mapManager.IsEntityMapPinDisabled( 'poi_gor_d_06_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_gor_d_17_note_b':
			if( mapManager.IsEntityMapPinDisabled( 'poi_gor_d_17_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_ved_a_02_note':
			if( mapManager.IsEntityMapPinDisabled( 'poi_ved_a_02_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
		case 'poi_ved_a_05_key':
			if( mapManager.IsEntityMapPinDisabled( 'poi_ved_a_05_mp' ) )
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;


		// <2> unconditional reset
        // KEEP ALL

        /*
		case 'noon_shadow_loot_note':
		case 'q702_vampire_mask':
		case 'q704_vampire_mask':
		case 'lw_de31_chest_key':	// supposedly not used for anything
		case 'lw_sk21_chest_key':	// supposedly not used for anything
		case 'ngu_gear_letter_db':
		case 'ngu_gear_letter_ck':
		case 'ngu_gear_intro_letter':
			playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
			break;
        */

        // <3> quest based reset
        // REMOVE: Ciri Empress; Werewolf Curse; Forest Spirit; Family Matters

        // REMOVE
        case 'q504_fish':
            journalEntry = journalManager.GetEntryByString( "Q504 Ciri Empress E8D3E37E-443DA208-F6407683-AA607416" );
            break;

        case 'sq201_werewolf_meat':
        case 'sq201_rotten_meat':
        // case 'sq201_cursed_jewel':
        case 'sq201_padlock_key':
        case 'sq201_chamber_key':
        case 'sq201_ship_manifesto':
        case 'q205_key_to_burrow':
            journalEntry = journalManager.GetEntryByString( "SQ201 Curse FE437B83-49995725-39F6089A-D2A87C27" );
            break;

        case 'sq204_wolf_heart':
        // case 'sq204_leshy_talisman':
            journalEntry = journalManager.GetEntryByString( "SQ204 Forest Spirit ADF1F1F0-41C5D27D-3397258A-2893B653" );
            break;

        // case 'q103_medallion':
        // case 'q103_botch_blood':
        // case 'q103_wooden_doll':
        case 'q103_incense':
        // case 'q105_johnnys_doll':
        // case 'q105_ravens_feather':
        // case 'q105_ritual_dagger':
        // case 'q105_soltis_ear':
        // case 'q105_witch_bones':
        // case 'q103_curse_book':
        // case 'q103_baron_dagger':
        // case 'q105_book_about_witches':
        // case 'q103_tamara_shrine_key':
            journalEntry = journalManager.GetEntryByString( "Q107 Swamps 7E03203E-4D6504E3-165C8693-A93BD13C" );
            break;

		// KEEP
		/*
		case 'q001_bedroom_key':
			journalEntry = journalManager.GetEntryByString( "Q001 Dream C1AA4441-48FF64E8-972B3BB9-250CC191" );
			break;

		case 'q002_griffin_trophy':
			journalEntry = journalManager.GetEntryByString( "Q002 Griffin hunt F6086B74-4E68EDFF-D79CE191-13BA33A7" );
			break;

		case 'q101_hendrik_trapdoor_key':
		case 'q101_hendrik_notes':
			journalEntry = journalManager.GetEntryByString( "Q101 Agent" );
			break;

		case 'q103_spinning_top':
			journalEntry = journalManager.GetEntryByString( "Q103 Ciris Chamber" );
			break;

		case 'q103_bell':
			journalEntry = journalManager.GetEntryByString( "Q103 Epic Goat Adventure 76EBF26B-42EE49CF-D65167A4-00A39FAF" );
			break;

		// case 'Illusion Medallion':	// this always stays in your inventory
		case 'q104_keira_mine_key':
			journalEntry = journalManager.GetEntryByString( "Q104 Mysterious Sorcerer 9B0CDB84-48EB84A9-D74AE685-1F8EBF16" );
			break;

		// case 'q106_magic_communicator':
		case 'q106_anabelle_remains':
		// case 'q106_magic_oillamp':
			journalEntry = journalManager.GetEntryByString( "Q106 Tower 38E268CF-431777D8-0A106B87-22F7BA0D" );
			break;

		case 'q107_guslar_cell_key':
			journalEntry = journalManager.GetEntryByString( "Q108 Forfather's Eve" );
			break;

		case 'q106_note_from_keira':
			journalEntry = journalManager.GetEntryByString( "Q109 Wrapup 3D71D5DD-4002F7DE-F8C5ECBE-13E226D0" );
			break;

		case 'q111_fugas_top_key':
		case 'q111_falkas_coin':
			journalEntry = journalManager.GetEntryByString( "Q111 Imlerith" );
			break;

		case 'q201_mead':
		case 'q201_pine_cone':
		case 'q201_skull':
		case 'q201_yen_chamber_key':
			journalEntry = journalManager.GetEntryByString( "Q201 Brans Reception" );
			break;

		case 'q202_navigator_horn':
		case 'q202_shackles':
		case 'q202_sail':
		case 'q202_nails':
		case 'q202_hjalmar_cell_key':
			journalEntry = journalManager.GetEntryByString( "Q202 Ice Giant" );
			break;

		case 'q203_eyeofloki':
			journalEntry = journalManager.GetEntryByString( "Q203 Cataclysm E7EB9A3A-47FB160A-471604AD-4323F31E" );
			break;

		case 'q203_chest_key':
		case 'q203_broksvard':
			journalEntry = journalManager.GetEntryByString( "Q203 Him 2BCB0806-47E1068C-4F3234AE-D5F3AC17" );
			break;

		case 'q206_wine_sample':
		case 'q206_herb_mixture':
		case 'q206_arnvalds_letter':
		case 'q206_arnvalds_key':
		case 'q206_arnvalds_chest_key':
			journalEntry = journalManager.GetEntryByString( "Q206 Berserkers B5130AE1-468A2171-0B7BD3B0-3FBE5499" );
			break;

		case 'q210_letter_for_emhyr':
			journalEntry = journalManager.GetEntryByString( "Q210 Emhyr D8775E1A-40ACF5BB-A66CD9B6-B6C148E4" );
			break;

		case 'q210_solarstein':
		case 'q301_rose_remembrance':
		case 'q401_triss_earring':
		case 'lw_sk_q210_key_1':
			journalEntry = journalManager.GetEntryByString( "Q210 Preparations 3FFACA7E-489A30A5-824E4887-21A507DE" );
			break;

		case 'q301_triss_parcel':
		case 'q301_magic_rat_incense':
		case 'q301_crematory_key':
			journalEntry = journalManager.GetEntryByString( "Q301 Dreamer A7EA902C-4021DB99-121C2E86-77E6923D" );
			break;

		case 'q301_haunted_doll':
		case 'q301_burdock':
		case 'q301_drawing_crib':
		case 'q301_drawing_oven':
			journalEntry = journalManager.GetEntryByString( "Q301 Find Dreamer D2C182B4-449540BC-CCB326B2-4FD786E7" );
			break;

		case 'q302_estate_key':
		case 'q302_ring_door_key':
		case 'q302_zdenek_contract':
		case 'q302_igor_note':
		case 'q302_roche_letter':
		case 'q302_roche_letter':
		case 'q302_crafter_notes':
			journalEntry = journalManager.GetEntryByString( "Q302 Mafia 5E9E0041-463E3ECD-C72D1B98-5CF5D6C6" );
			break;

		case 'q303_bomb_fragment':
		case 'q303_bomb_cap':
		case 'q303_wine_bottle':
		case 'q303_dudus_briefing':
		case 'q303_contact_note':
		case 'q303_marked_bible':
		case 'q303_menges_skeleton_key':
		case 'q303_vault_key':
			journalEntry = journalManager.GetEntryByString( "Q303 Treasure 0292F065-4622C52C-4B7C3492-C7B3FA8E" );
			break;

		case 'q304_dandelion_diary':
		case 'Wooden sword':
			journalEntry = journalManager.GetEntryByString( "Q304 Looking For Dandelion" );
			break;

		case 'q305_script_drama_title1':
		case 'q305_script_drama_title2':
		case 'q305_script_comedy_title1':
		case 'q305_script_comedy_title2':
		case 'q305_script_for_irina':
			journalEntry = journalManager.GetEntryByString( "Q305 The Play 35F76922-4196A59D-0327FC95-7CFF788D" );
			break;

		case 'q305_dandelion_signet':
		case 'q305_key_midgets_house':
			journalEntry = journalManager.GetEntryByString( "Q305 Looking for Dandelion C5306CA1-4D2C97E4-525EF78E-72552F9E" );
			break;

		case 'q308_coroner_msg':
		case 'q308_sermon_1':
		case 'q308_sermon_2':
		case 'q308_sermon_3':
		case 'q308_sermon_4':
		case 'q308_sermon_5':
		case 'q308_psycho_farewell':
		case 'q308_vegelbud_invite':
		case 'q308_priscilla_invite':
		case 'q308_anneke_invite':
		case 'q308_last_invite':
		case 'q308_nathanel_sermon_1':
		case 'q308_anneke_invite':
			journalEntry = journalManager.GetEntryByString( "Q308 Psycho 6EDC27E1-46D57C09-1828A6AE-2E6C46D8" );
			break;

		case 'q309_witch_hunters_orders':
		// case 'q309_glejt_from_dijkstra':	// this always stays in your inventory
		case 'q309_mssg_from_triss':
			journalEntry = journalManager.GetEntryByString( "Q309 Casablanca 06950C40-442252DF-03C66981-3FD2B4F3" );
			break;

		case 'q309_key_piece1':
		case 'q309_key_piece2':
		case 'q309_key_piece3':
		case 'q309_key_letters':
		case 'q309_key_orders':
			journalEntry = journalManager.GetEntryByString( "Q309 Novigrad Under Control" );
			break;

		case 'q310_backdoor_key':
			journalEntry = journalManager.GetEntryByString( "Q310 Ciri's Night Out C4C78D01-4FB49E36-60BB90B6-A53ADCF5" );
			break;

		case 'q310_lever':
		case 'q310_sewer_door_key':
		case 'q310_cell_key':
		case 'q310_yen_trinket':
			journalEntry = journalManager.GetEntryByString( "Q310 Prison Break 5B858684-4A646E08-258AF3AD-635E235B" );
			break;

		case 'q310_wine':
			journalEntry = journalManager.GetEntryByString( "STORY - Chapter 3 - Preparations in Novigrad EDCCCDF6-49D327D0-307CDABA-D4DB1F8A" );
			break;

		case 'Potestaquisitor':
			journalEntry = journalManager.GetEntryByString( "Q401 Megascope 0BF1484F-4FAE6703-2880A4B3-C08F7F5C" );
			break;

		case 'q401_forktail_brain':
			journalEntry = journalManager.GetEntryByString( "Q401 Hunt With Eskel 8580CFDF-4DA521BD-A8AD399F-C68ADF75" );
			break;

		case 'Yennefers Dress':
			journalEntry = journalManager.GetEntryByString( "Q401 The Reunion D51FE71A-4C883779-540303A6-81AA0DE5" );
			break;

		case 'q401_sausages':
		case 'q401_bread':
		case 'q401_cheese':
		case 'q401_trial_key_ingredient_a':
		case 'q401_trial_key_ingredient_b':
		case 'q401_trial_key_ingredient_c':
		case 'q401_bucket_and_rag':
		case 'yennefers_omelette':
		case 'yennefers_omelette_fantasie':
		case 'scrambled_eggs':
		case 'q401_disgusting_meal':
		case 'Trial Potion Kit':
			journalEntry = journalManager.GetEntryByString( "Q401 The Curse F4D14B2F-43C39290-E76256A6-9BB706B9" );
			break;

		case 'ciris_phylactery':
			journalEntry = journalManager.GetEntryByString( "Q401 Konsylium CA9F7D30-404727DE-FA4173B3-C7766A6A" );
			break;

		case 'q401_avallachs_wisp':
			journalEntry = journalManager.GetEntryByString( "Q402 Isle of Mists 1AC2E15C-4BCBB955-BF0697B9-86A21FD1" );
			break;

		// case 'q403_ciri_meteor':
		//	journalEntry = journalManager.GetEntryByString( "Q403 Battle of Kaer Morhen" );
		//	break;

		case 'q503_lockbox_key':
			journalEntry = journalManager.GetEntryByString( "Q503 NEW Ciri Dead 8F17E40A-4942D119-96BC5A99-28A6F4D9" );
			break;

		case 'q505_gems':
			journalEntry = journalManager.GetEntryByString( "Q505 Ciri Free 053B2B41-41E1DB6D-D6F4ECA6-94443258" );
			break;

		case 'q601_sewers_key':
			journalEntry = journalManager.GetEntryByString( "q601intro 92B33408-4FCDF297-7F1F0CA4-60ED91A0" );
			break;

		case 'q602_cap':
		case 'q602_wrong_shoe_1':
		case 'q602_wrong_shoe_2':
		case 'q602_shani_shoe':
		case 'q602_olgierd_blood':
		case 'q602_graverobber_key':
		case 'q602_letter_from_witold':
		case 'Censer':
		case 'Plank':
			journalEntry = journalManager.GetEntryByString( "q602wedding 78053F6B-498256AE-F9C0229F-B9EF3972" );
			break;

		case 'q603_hoff_letter':
			journalEntry = journalManager.GetEntryByString( "q603getinman 0B8961C8-4338EB48-B2D635A5-C49FAA38" );
			break;

		case 'q603_diarrhea_potion':
			journalEntry = journalManager.GetEntryByString( "q603diversion" );
			break;

		case 'q603_max_house':
			journalEntry = journalManager.GetEntryByString( "q603bank B554FBE9-41969AB7-7123A48A-258002C0" );
			break;

		case 'q604_mansion_back_key':
		case 'q604_mansion_front_key':
		case 'q604_olgierd_letter':
		case 'q604_sketchbook':
		case 'q604_demon_book':
		case 'q604_genie_book':
		case 'q604_candles':
		case 'q604_chalk':
		case 'q604_chalice':
		case 'q604_comb':
		case 'q604_iris_remains':
		case 'q604_small_painting':
		case 'q604_worn_book':
		case 'q604_bloody_towel':
		case 'q604_bed_oillamp':
		case 'q604_dressing_gown':
		case 'q604_cat_bowl':
		case 'q604_cup':
		case 'q604_wedding_flowers':
		case 'q604_wedding_veil':
		case 'q604_dog_bowl':
		case 'q604_fruit_bowl':
		case 'q604_paint_palette':
		case 'q604_gazebo_teaset':
		case 'q604_toast_cup':
		case 'q604_mug':
		case 'q604_olgierd_knife':
		case 'q604_olgierd_pipe':
		case 'q604_paper_shred1':
		case 'q604_tray':
			journalEntry = journalManager.GetEntryByString( "q604mansion 5F9AB09D-451BD33F-475ABAA4-4B7BF3BF" );
			break;

		case 'q604_rose_painting':
		case 'q604_iris_flower':
		case 'q605_scholar_key':
			journalEntry = journalManager.GetEntryByString( "q605finale 0551620D-437310FC-3A100C91-55645E17" );
			break;

		case 'q701_duchess_summons':
		case 'q701_nml_notice':
			journalEntry = journalManager.GetEntryByString( "Q701A Hook" );
			break;

		case 'q701_corvo_bianco_deed':
		case 'q701_victim_handkarchief':
		case 'dettlaff_arm':
		case 'q701_coin_pouch':
		case 'q701_swan_item':
		case 'q701_unicorn_item':
		case 'q701_hare_mask':
			journalEntry = journalManager.GetEntryByString( "Q701_Festival" );
			break;

		case 'q702_wight_gland':
		case 'q702_wight_brew':
		case 'q702_wicht_key':
		case 'q702_graveir_lure':
		case 'q702_wight_diary':
			journalEntry = journalManager.GetEntryByString( "Q702 Reverb Mixture 1" );
			break;

		case 'q703_bung':
		case 'q703_wooden_hammer':
			journalEntry = journalManager.GetEntryByString( "Q703 Wine" );
			break;

		case 'q703_geralt_wanted_note':
		case 'q703_hos_sketch':
		case 'q703_heart_of_toussaint':
		case 'q703_unique_hunting_knife':
		case 'Geralt mandragora mask':
		case 'Lounge guard mandragora mask':
		case 'Only Geralt mandragora mask':
			journalEntry = journalManager.GetEntryByString( "Q703 Art 6C2340E8-4E58E618-BF93D5A9-E8E5CB29" );
			break;

		case 'q704_ft_bean_01':
		case 'q704_ft_bean_02':
		case 'q704_ft_bean_03':
		case 'q704_ft_riding_hoods_hood':
		case 'q704_ft_pipe':
		case 'q704_ft_bottle_caps':
		case 'q704_ft_corkscrew':
		case 'q704_ft_fake_teeth':
		case 'q704_ft_syanna_journal':
		case 'q704_ft_fairy_key':
		case 'q704_ft_goose_key':
		case 'q704_orianas_vampire_key':    // also in Q704 Vampires
			journalEntry = journalManager.GetEntryByString( "Q704B Fairy Land E458AAC7-4C80112B-0C1E6694-113E60B1" );
			break;

		case 'q704_vampire_lure_bolt':
		case 'q704_garkain_trophy':
			journalEntry = journalManager.GetEntryByString( "Q704 Monster Hunt 41C2C88E-465E617E-E504A28D-B7557E96" );
			break;

		case 'q704_orianas_vampire_key':    // also in Q704B Fairy Land
		case 'q704_mages_notebook':
		case 'q704_mages_notes_01':
		case 'q704_mages_notes_02':
		case 'q704_vampire_offering':
			journalEntry = journalManager.GetEntryByString( "Q704 Vampires E2F4AA1D-4BDD183B-9DDFD89D-009B34B7" );
			break;

		case 'q705_ah_letter':
		case 'q705_medal':
		case 'q705_white_roses':
		case 'q705_mandragora':		// also shows up in Q705 Prison
		case 'q705_geralt_mask':	// also shows up in Q705 Prison
		case 'q705_mandragora_gloves':	// also shows up in Q705 Prison
		case 'Beauclair casual shoes 01':
		case 'Beauclair Casual Pants 01':
		case 'Beauclair Casual Suit 01':
		case 'Beauclair Casual Suit with medal':
			journalEntry = journalManager.GetEntryByString( "Q705 Ceremony 75B389CC-4F5043B3-9CC508A2-88F82183" );
			break;

		case 'q705_dirty_clothes':
		case 'q705_soap':
		case 'q705_mandragora':		// also shows up in Q705 Ceremony
		case 'q705_geralt_mask':	// also shows up in Q705 Ceremony
		case 'q705_mandragora_gloves':	// also shows up in Q705 Ceremony
		case 'Beauclair Prison Pants':
		case 'Beauclair Prison Shirt':
			journalEntry = journalManager.GetEntryByString( "Q705 Prison FD761CAC-44DF7883-8A45C9AF-50163CDF" );
			break;

		case 'q705_prison_stash_note':
		case 'q705_hammer_chisel':
			journalEntry = journalManager.GetEntryByString( "Q705 Prison Stash A33E591C-44B7960A-B55173AA-7075900C" );
			break;

		// case 'q705_tissue_extractor':	// this always stays in your inventory
		case 'q705_regis_reward_letter':
			journalEntry = journalManager.GetEntryByString( "Q705 Home C9F4557A-4660507F-1FE53F9D-B6C060BE" );
			break;

		case 'sq101_safe_goods':
			journalEntry = journalManager.GetEntryByString( "SQ101 Keira 1EE3C260-47DE26F3-7D422FA3-94EE84C7" );
			break;

		case 'sq102_barn_door_side_key':
		case 'sq102_lockbox_key':
			journalEntry = journalManager.GetEntryByString( "SQ102 Dolores 4FF26AE8-45267A85-9103158E-1931163D" );
			break;

		case 'sq104_key':
		case 'sq104_notes':
			journalEntry = journalManager.GetEntryByString( "SQ104 Werewolf 15CBFA78-4DA5D1B1-FC623EAD-9F73CE73" );
			break;

		case 'sq106_manuscript':
		case 'sq106_hammond_whereabouts':
			journalEntry = journalManager.GetEntryByString( "SQ106 Killbill 23EBF49C-4CD2BFB5-A2D8FB94-B27040A6" );
			break;

		case 'sq107_vault_key':
			journalEntry = journalManager.GetEntryByString( "SQ107 Pigs 5C8108FD-45D9966D-21960981-F9AFBBD2" );
			break;

		case 'sq108_smith_tools':
		case 'sq108_acid_gland':
		case 'sq108_griffin_trophy':
			journalEntry = journalManager.GetEntryByString( "SQ108 Master Blacksmith 10D429DF-44D89D62-38DC6AA5-D34876F3" );
			break;

		case 'q001_crystal_skull':
		case 'sq202_half_seal':
			journalEntry = journalManager.GetEntryByString( "SQ202 Yen 038C9DE1-49CE76B6-8B594897-DAA76B87" );
			break;

		case 'sq205_fernflower_petal':
		case 'sq205_preserved_mash':
		case 'sq205_moonshine_spirit':
		case 'sq205_brewing_instructions':
		case 'sq205_brewmasters_log':
			journalEntry = journalManager.GetEntryByString( "SQ205 Alchemist 52DCBB5B-433C44F6-FC2578A2-49BB8D86" );
			break;

		case 'sq210_gog_book':
		case 'sq210_underwater_gate2_key':
			journalEntry = journalManager.GetEntryByString( "SQ210 Impossible Tower 7ECF7633-46381266-A19DDA89-92DB202A" );
			break;

		case 'Geralt mask 01':
		case 'Geralt mask 02':
		case 'Geralt mask 03':
		case 'Triss mask':
			journalEntry = journalManager.GetEntryByString( "SQ301 Triss DF5C1032-43CFD052-056742B1-5E8C57B0" );
			break;

		case 'sq302_crystal':
		case 'sq302_generator_2':
		case 'sq302_generator_3':
		case 'sq302_eyes':
		case 'sq302_agates':
		case 'sq302_philippa_key':
			journalEntry = journalManager.GetEntryByString( "SQ302 Philippa 9D3E34EB-4DB8F4BA-4B1C649B-7B7BBAA5" );
			break;

		case 'sq303_robbery_speech':
		case 'sq303_pollys_key':
		case 'sq303_blunt_sword':
			journalEntry = journalManager.GetEntryByString( "SQ303 Brothel 1DBEC8F9-4023BB3B-23EB70A1-52D14101" );
			break;

		case 'sq304_ledger_book':
			journalEntry = journalManager.GetEntryByString( "SQ304 Armorsmith BCFD66C3-4E55BECB-00975882-A9203CDC" );
			break;

		// case 'sq305_conduct':	// this always stays in your inventory
		case 'sq305_trophies':
			journalEntry = journalManager.GetEntryByString( "SQ305 Scoiatael 6AFAFC3C-47D50499-6D21D3A7-0D30C14D" );
			break;

		case 'sq310_ledger_book':
		case 'sq310_zed_door_key':
		case 'sq310_triangle_key':
			journalEntry = journalManager.GetEntryByString( "SQ310 Dangerous Game 4EAA1CA7-48911762-9C84E0B0-2EA2F154" );
			break;

		case 'sq701_victory_laurels':
		case 'sq701_item_wearable_feather':
			journalEntry = journalManager.GetEntryByString( "sq701_tournament" );
			break;

		case 'sq703_map':
		case 'sq703_map_alternative':
		case 'sq703_hunter_letter':
		case 'sq703_wife_letter':
		case 'sq703_accountance_book':
			journalEntry = journalManager.GetEntryByString( "sq703_wine_wars 39087354-4BBDC2C0-3D0942B3-0230FD61" );
			break;

		case 'mq0002_box':
			journalEntry = journalManager.GetEntryByString( "MQ0002 Missing Goods 377AABFA-4FBCA307-01FA41AE-E39DBD41" );
			break;

		case 'mq0003_ornate_bracelet':
		case 'mq0003_girls_diary':
		case 'mq0003_noonwraith_trophy':
			journalEntry = journalManager.GetEntryByString( "MQ0003 Freshwater ADDBEE45-437F7E6B-286D2E91-190FEF86" );
			break;

		case 'mq0004_frying_pan':
			journalEntry = journalManager.GetEntryByString( "MQ0004 Locked Shed F7C2C616-4FBFA7E7-3A37FBA1-0FB8CFC8" );
			break;

		case 'mq1001_dog_collar':
		case 'mq1001_locker_key':
			journalEntry = journalManager.GetEntryByString( "mq1001 Dog Trail 9E0FE58C-4C1692EE-AEEDE1AD-9B01FE10" );
			break;

		case 'mq1002_artifact_1':
		case 'mq1002_artifact_2':
		case 'mq1002_artifact_3':
			journalEntry = journalManager.GetEntryByString( "mq1002 Rezydencja B85F69B4-4563B896-339733A6-9223A984" );
			break;

		case 'mq1019_oil':
			journalEntry = journalManager.GetEntryByString( "MQ1019 A matter of faith 308B9390-4136EF32-638710A3-AD7D32CA" );
			break;

		case 'mq1022_paint':
			journalEntry = journalManager.GetEntryByString( "MQ1022 Border Troll 5AF9BD9A-4EC9C1C1-F1C28FA4-001DD280" );
			break;

		case 'mq1010_ring':
			journalEntry = journalManager.GetEntryByString( "mq1010 Last Rite D637A77D-4F37B7B2-BBD695A6-E1090C08" );
			break;

		case 'mq1028_muggs_papers':
			journalEntry = journalManager.GetEntryByString( "MQ1028 Courier 4BAE35CF-4152C544-6D1B748C-D68C7B61" );
			break;

		case 'mq1050_dragon_root':
			journalEntry = journalManager.GetEntryByString( "mq1050_written_in_the_stars 189702C5-4E377991-89B50D81-45F1188E" );
			break;

		case 'mq1051_spyglass':
			journalEntry = journalManager.GetEntryByString( "mq1051_nilfgaard C5583B34-44155D58-82174C98-CE7BE4EF" );
			break;

		case 'mq1055_letters':
			journalEntry = journalManager.GetEntryByString( "mq1055_nilfgaard_mom BCBB27C8-4FA7E374-3CC1408F-8CD2AC77" );
			break;

		case 'mq1058_cat_medallion':
		case 'mq1058_doll':
			journalEntry = journalManager.GetEntryByString( "dlcmq1058lynxwitcher" );
			break;

		case 'mq2001_kuilu':
		case 'mq2001_journal_1a':
		case 'mq2001_journal_1b':
		case 'mq2001_journal_1c':
			journalEntry = journalManager.GetEntryByString( "mq2001 Kuilu BF18DA51-48A12FC9-7FC49692-3E4593EB" );
			break;

		case 'mq2001_horn':
		case 'mq2001_journal_2b':
			journalEntry = journalManager.GetEntryByString( "mq2001 Jarl's Horn E2BB1F49-49E4747D-05D1B892-E554D977" );
			break;

		case 'mq2002_sword':
			journalEntry = journalManager.GetEntryByString( "mq2002 Pirate Scavengers D79A07AE-46BB8EB1-8E0FB18E-99ADEE44" );
			break;

		case 'mq2003_treasure_chamber_key':
			journalEntry = journalManager.GetEntryByString( "mq2003 Disturbing rest B9D89677-47CCB257-B4D14398-660645F1" );
			break;

		case 'mq2006_key_1':
		case 'mq2006_map_1':
			journalEntry = journalManager.GetEntryByString( "MQ2006 Bergeton's Treasure 1BE06D7D-4CE755B0-FA87E0B2-570B6DC9" );
			break;

		case 'mq2006_key_2':
		case 'mq2006_map_2':
			journalEntry = journalManager.GetEntryByString( "MQ2006 Erleif's Treasure D7B5996B-41481C46-B6A27D97-AA28BF2A" );
			break;

		case 'mq2010_lumbermill_journal_1':
		case 'mq2010_lumbermill_journal_2':
		case 'mq2010_lumbermill_journal_3':
			journalEntry = journalManager.GetEntryByString( "mq2010 human trap F9352CB9-4D7CD711-8FA25690-80B11808" );
			break;

		case 'mq2012_letter':
			journalEntry = journalManager.GetEntryByString( "MQ2012 Bad Place, Bad Time 4FE8E4CE-44CFD310-521CBCBA-7D583F2B" );
			break;

		case 'mq2015_kurisus_note':
			journalEntry = journalManager.GetEntryByString( "mq2015 Long Time Apart 62611322-4F5B1005-3765EA81-5D229FB0" );
			break;

		case 'mq2020_slave_cells_key':
		case 'mq2020_pirate_lord_house_door':
			journalEntry = journalManager.GetEntryByString( "mq2020 Flesh for cash buisness 75CE5700-4B1F1BBE-069237AE-6D20CA0F" );
			break;

		case 'mq2030_shawl':
			journalEntry = journalManager.GetEntryByString( "MQ2030_nithing 4EC24D96-4C808232-F09B1DAB-1AFE886D" );
			break;

		case 'mq2037_drakkar_chest_key':
		case 'mq2037_dowry':
		case 'mq2037_dimun_directions':
			journalEntry = journalManager.GetEntryByString( "MQ2037 Dishonored 130A322C-479E4E1C-6C0ED1B4-0180136D" );
			break;

		case 'mq2038_headsman_sword':
			journalEntry = journalManager.GetEntryByString( "mq2038_shieldmaiden 1D9F7929-4152C567-320675A4-7DCB72CE" );
			break;

		case 'mq2041_dexterity_token':
		case 'mq2043_conviction_token':
			journalEntry = journalManager.GetEntryByString( "mq2040_trial_of_power 1EF218C4-4E679658-D6E32086-B61FA550" );
			break;

		case 'mq2048_stone_medalion':
		case 'mq2048_ships_logbook':
		case 'mq2048_guide_notes':
		case 'mq2048_waxed_letters':
			journalEntry = journalManager.GetEntryByString( "mq2048_msg_in_a_bottle FA188AD1-40B0EAD7-DE67D89A-1BC39817" );
			break;

		case 'mq2049_book_1':
		case 'mq2049_book_2':
		case 'mq2049_book_3':
		case 'mq2049_book_4':
		case 'mq2049_book_5':
			journalEntry = journalManager.GetEntryByString( "mq2049_atheist 6C500404-4E5B6E05-E920FEAD-0EFE2069" );
			break;

		case 'mq3002_hidden_messages_note_01':
		case 'mq3002_hidden_messages_note_02':
		case 'mq3002_hidden_messages_note_03':
		case 'mq3002_chest_key':
			journalEntry = journalManager.GetEntryByString( "mq3002 Spies of Novigrad A6D42062-41BF578C-D80E12A6-55FEF82D" );
			break;

		case 'mq3012_noble_statuette':
			journalEntry = journalManager.GetEntryByString( "mq3012Noble Statuette 6F0D2FFF-481E93D1-CBFEC0BC-57E0EE02" );
			break;

		case 'mq3012_soldier_statuette':
			journalEntry = journalManager.GetEntryByString( "mq3012 Warrior Statuette DD3CF855-448B37B2-48E1C9BF-0E94A5AD" );
			break;

		case 'q103_safe_conduct':
		case 'mq1023_fake_papers':
			journalEntry = journalManager.GetEntryByString( "MQ3024 you shall not pass 37881603-4A81EF31-571EBAAC-4304CEE6" );
			break;

		case 'mq3026_varese_invitation':
		case 'mq3026_horse_racing_leaflet':
			journalEntry = journalManager.GetEntryByString( "MQ3026 Novigrad Horse Racing B3338F99-4362DADA-4BA1F9AD-95F10F44" );
			break;

		case 'mq3027_my_manifest':
		case 'mq3027_fluff_book_1':
		case 'mq3027_fluff_book_2':
		case 'mq3027_fluff_book_3':
		case 'mq3027_fluff_book_4':
		case 'mq3027_letter':
			journalEntry = journalManager.GetEntryByString( "mq3027_mymanifest 546EC303-469C24B8-809E7286-58C288A0" );
			break;

		case 'mq3031_mother_of_pearl':
			journalEntry = journalManager.GetEntryByString( "mq3031_aging_romance F904638D-49C21839-0A35B380-D7727AA7" );
			break;

		case 'mq0004_thalers_monocle':
		case 'mq0004_thalers_monocle_wearable':
		case 'mq3035_philppa_ring':
			journalEntry = journalManager.GetEntryByString( "mq3035_emhyr 05511846-450F2A65-E7F695AD-31DF9E94" );
			break;

		case 'mq3039_loot_chest_key':
			journalEntry = journalManager.GetEntryByString( "mq3039_crows 5E06A175-429A6042-2F75B895-AA3EE26A" );
			break;

		case 'mq4002_note':
			journalEntry = journalManager.GetEntryByString( "mq4002_anomaly" );
			break;

		case 'mq4003_siren_ring':
		case 'mq4003_husband_ring':
			journalEntry = journalManager.GetEntryByString( "mq4003_lake 2B2D83B9-47004059-EF60EDB1-C9ABCD36" );
			break;

		case 'mq4004_boy_remains':
			journalEntry = journalManager.GetEntryByString( "mq4004_bastion" );
			break;

		case 'mq4005_note_1':
			journalEntry = journalManager.GetEntryByString( "mq4005_sword" );
			break;

		case 'mq4006_book':
			journalEntry = journalManager.GetEntryByString( "mq4006_armor" );
			break;

		case 'mq6002_key':
		case 'mq6002_house_key':
			journalEntry = journalManager.GetEntryByString( "mq6002_cannibals F8D62C5E-4563387F-38CAB1AE-2A6D8E1B" );
			break;

		case 'mq6003_certificate_of_citizenship':
		case 'mq6003_tax_bill':
			journalEntry = journalManager.GetEntryByString( "mq6003_tax_collector 7E6E5238-4F4BE640-A7AD1189-B6398F13" );
			break;

		case 'mq6004_broken_rose_orders':
		case 'mq6004_lab_key':
			journalEntry = journalManager.GetEntryByString( "mq6004_broken_rose B89DD723-4BD41D61-01BB70B8-849A3C8C" );
			break;

		case 'mq6005_nephrite':
		case 'mq6005_pickaxe':
			journalEntry = journalManager.GetEntryByString( "mq6005 Enchanter Level 1 BACA6F45-42119393-83A37B8B-B475EB03" );
			break;

		case 'mq6005_painite':
			journalEntry = journalManager.GetEntryByString( "mq6005 Enchanter Level 2 1B2BE57B-4536A84E-F3F3498C-C3F880DF" );
			break;

		case 'mq7001_louis_urn':
		case 'mq7001_margot_urn':
		case 'mq7001_house_key':
			journalEntry = journalManager.GetEntryByString( "mq7001 Rest in peace 6791BAC0-4EAC8D29-8900EA8D-62CF8490" );
			break;

		case 'mq7002_love_letter_01':
		case 'mq7002_love_letter_02':
			journalEntry = journalManager.GetEntryByString( "mq7002 Stubborn Knight C9725EB0-42EB7261-0E491ABB-D0BC09B4" );
			break;

		case 'mq7004_knight_item':
		case 'mq7004_scarf':
		case 'mq7004_storybook':
			journalEntry = journalManager.GetEntryByString( "mq7004_bleeding_tree" );
			break;

		case 'mq7007_tribute_food':
		case 'mq7007_tribute_wine':
		case 'mq7007_elven_shield':
		case 'mq7007_elven_mask':
		case 'mq7007 Elven Sword':
			journalEntry = journalManager.GetEntryByString( "mq7007_gargoyles" );
			break;

		case 'mq7009_painter_accessories':
			journalEntry = journalManager.GetEntryByString( "mq7009 Painter BCD96CB1-4EF58B97-51C608B0-AB2EAA3C" );
			break;

		case 'mq7010_dracolizard_trophy':
			journalEntry = journalManager.GetEntryByString( "mq7010 Airborne Cattle 2633D68E-4C40FA82-D17A2A88-0A46D256" );
			break;

		case 'mq7011_vault_key':
		case 'Flowers':
		case 'Perfume':
			journalEntry = journalManager.GetEntryByString( "mq7011 Where's My Money" );
			break;

		case 'mq7015_reginalds_balls':
			journalEntry = journalManager.GetEntryByString( "mq7015_souvenir 3C3DC52F-445095B5-89C66893-79E185A1" );
			break;

		case 'mq7017_mushroom_potion':
		case 'mq7017_pinastri_note':
		case 'mq7017_zmora_trophy':
			journalEntry = journalManager.GetEntryByString( "mq7017_talking_horse 9876843E-47D51F74-12868095-A0A7D712" );
			break;

		case 'mq7018_guild_contract_letter':
		case 'mq7018_workers_letter_basilisk_alive':
		case 'mq7018_workers_letter_basilisk_dead':
			journalEntry = journalManager.GetEntryByString( "mq7018_last_one" );
			break;

		case 'mq7021_filter':
			journalEntry = journalManager.GetEntryByString( "mq7021_left_behind E0EB6BB5-492FD420-5E53F4B9-6CC58BB7" );
			break;

		case 'mq7023_letter_yen':
		case 'mq7023_letter_triss':
		case 'mq7023_letter_neutral':
		case 'mq7023_map':
		case 'mq7023_journal_laura':
		case 'mq7023_gargoyle_hand':
		case 'mq7023_megascope_crystal_2':
		case 'mq7023_megascope_crystal_4':
		case 'mq7023_centipede_albumen_mutated':
			journalEntry = journalManager.GetEntryByString( "mq7023_mutations A644CC5F-41D19717-CE2A4398-34879DFB" );
			break;

		// case 'mq7024_vineyard_key':		// this always stays in your inventory
		//	journalEntry = journalManager.GetEntryByString( "mq7024_home" );
		//	break;
		*/


		default:
			break;
		}

		if( journalEntry )
		{
			entryStatus = journalManager.GetEntryStatus(journalEntry);
			if( entryStatus == JS_Success || entryStatus == JS_Failed )
			{
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
				playerInv.RemoveItemTag( questItems[itemIdx], 'NoDrop' );
			}
		}
	}

	// <4> Trophy Gear Keys & Notes
    // KEEP ALL

    /*
	for( itemIdx = 0; itemIdx < questItems.Size(); itemIdx += 1 )
	{
		itemName = playerInv.GetItemName( questItems[itemIdx] );
		journalEntry = NULL;
		switch( itemName )
		{


		// quest based reset
		case 'mh101_cockatrice_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Cockatrice AEDB434D-438C5423-61A7D898-6DC9F894" );
			break;

		case 'mh102_arachas_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Arachas 6C4EF31A-4B5F767F-B846D393-85EA4A1C" );
			break;

		case 'mh103_killers_knife':
		case 'mh103_girls_journal':
		case 'mh103_nightwraith_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Nightwraith 01ED9015-41F7A1C1-3C1F26BB-6E0A3E0B" );
			break;

		case 'mh104_ekimma_house_key':
		case 'mh104_ekimma_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Ekimma 96D759B7-465E24FF-1E756D99-63C57C10" );
			break;

		case 'mh105_wyvern_trophy':
			journalEntry = journalManager.GetEntryByString( "mh105: Hunt Wyvern 915C91BF-47B869DE-0B9CEDBE-44113A37" );
			break;

		case 'mh106_hags_skulls':
		case 'mh106_gravehag_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Grave Hag 34DDEA30-468AE445-77D61A92-31DD03DC" );
			break;

		case 'mh107_czart_lure':
		case 'mh107_czart_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Fiend FDADCB0D-43B1AC15-D25AF1A3-92360167" );
			break;

		case 'mh108_fogling_trophy':
			journalEntry = journalManager.GetEntryByString( "NML Hunt: Fogling 210232CB-4EF519B3-67C847AA-2FA3F75F" );
			break;

		case 'mh201_cave_troll_trophy':
			journalEntry = journalManager.GetEntryByString( "Skellige Hunt: Cave Troll A1BE23D7-4EED38B8-A947F1AF-E274F6D4" );
			break;

		case 'mh202_nekker_warrior_trophy':
			journalEntry = journalManager.GetEntryByString( "Skellige Hunt: Nekker Warrior 3286D764-498C15B1-0299219A-BDBC6898" );
			break;

		case 'mh203_water_hag_trophy':
			journalEntry = journalManager.GetEntryByString( "Skellige Hunt: Water Hag" );
			break;

		case 'mh204_leshy_trophy':
			journalEntry = journalManager.GetEntryByString( "SQ204 Forest Spirit ADF1F1F0-41C5D27D-3397258A-2893B653" );
			break;

		case 'mh206_fiend_trophy':
			journalEntry = journalManager.GetEntryByString( "Hunt Skellige: Fiend 1A0B2EF7-4F0EF39E-A3DC4A82-D9AA9D9B" );
			break;

		case 'mh207_lighthouse_keeper_letter':
		case 'mh207_lighthouse_door_key':
		case 'mh207_wraith_trophy':
			journalEntry = journalManager.GetEntryByString( "mh207: Wraith F8815175-4F992A27-45F5F19C-7706FA95" );
			break;

		case 'mh208_forktail_trophy':
			journalEntry = journalManager.GetEntryByString( "Skellige Hunt: Forktail AB316D0C-4745B758-A6AAB1B5-9B0C2565" );
			break;

		case 'mh210_lamia_trophy':
			journalEntry = journalManager.GetEntryByString( "mh210 lamia 4FC8B957-4AD164B1-D50E34A6-2E8118AA" );
			break;

		case 'mh301_merc_contract':
		case 'mh301_gryphon_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Gryphon 0FD87FDB-405C3D98-3871229B-03B5864B" );
			break;

		case 'mh302_leshy_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Leszy 31761A49-453910B0-B7EB03A7-BA362A08" );
			break;

		case 'mh303_succubus_house_key':
		case 'mh303_succubus_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Succubus 2EE64753-4749CF55-84ECCFA2-AFF34B00" );
			break;

		case 'mh304_morge_door_key':
		case 'mh304_katakan_hideout_door_key':
		case 'mh304_katakan_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Katakan 43E9C2A8-43DADE8C-FEC51388-977FB3FC" );
			break;

		case 'mh305_doppler_letter':
		case 'mh305_doppler_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt : Doppler D713995F-4D748EC3-F8C29892-A5309EB8" );
			break;

		case 'mh306_dao_manor_door_key':
		case 'mh306_dao_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Da'o AF164E2C-41CC196D-1AB4BFB6-1DAA9A91" );
			break;

		case 'mh307_minion_lair_key':
		case 'mh307_minion_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Wild Hunt Minion" );
			break;

		case 'mh308_dagger':
		case 'mh308_noonwraith_trophy':
			journalEntry = journalManager.GetEntryByString( "Novigrad Hunt: Noonwratih 30A9D01A-4F9DC8AF-93BD3E90-040A9450" );
			break;

		case 'mh701_lost_locket':
		case 'mh701_fresh_blood':
		case 'mh701_usable_lure':
		case 'mh701_wine_cellar_key':
		case 'mh701_sharley_matriarch_trophy':
			journalEntry = journalManager.GetEntryByString( "mh701_tectonic_terror 32486D3E-469FB6BB-9FB1D18B-88046F5A" );
			break;

		case 'camm_trophy':
			journalEntry = journalManager.GetEntryByString( "cammerlengo AFAD298F-47B94308-D6D65092-02F3FC2E" );
			break;

		case 'Gwent Almanac':
			journalEntry = journalManager.GetEntryByString( "Card Game Meta: Gather All 22A27919-4ECCF7E1-9F536F90-D140CB21" );
			break;

		case 'cg100_barons_notes':
			journalEntry = journalManager.GetEntryByString( "CG : No Man's Land BECB3BA0-4C293A48-C3C229B6-31A1439A" );
			break;

		case 'cg300_roches_list':
			journalEntry = journalManager.GetEntryByString( "CG: Old Friends B3C40CBF-4F39BB84-020888A2-7CEF294F" );
			break;

		case 'cg700_gwent_statue':
		case 'cg700_letter_monniers_brother':
		case 'cg700_letter_merchants':
		case 'cg700_letter_purist':
			journalEntry = journalManager.GetEntryByString( "cg700_tournament DBBF356D-4FFC9CC0-29404AAF-D6208B48" );
			break;

		case 'ff701_fist_fight_trophy':
			journalEntry = journalManager.GetEntryByString( "ff701_master D3B2B89D-4E35CBA8-70F0B39C-46F2BF82" );
			break;

		case 'th1001_journal_viper_part1':
		case 'th1001_journal_viper_part2':
			journalEntry = journalManager.GetEntryByString( "Viper Set AA5D86A4-401E4811-7C74B6AC-7A80CBB3" );
			break;

		case 'th1003_journal_cat_lady':
		case 'th1003_journal_lynx_part1':
		case 'th1003_journal_lynx_part2':
		case 'th1003_journal_lynx_part3':
		case 'th1003_journal_lynx_part4':
		case 'th1003_journal_lynx_part5':
		case 'th1003_journal_lynx_part6':
		case 'th1003_journal_lynx_part7':
		case 'th1003_journal_lynx_part8':
		case 'th1003_ireneus_lab_key':
			journalEntry = journalManager.GetEntryByString( "Lynx Set C513BD36-423276DE-86C4E9B0-42E9A8AB" );
			break;

		case 'th1003_map_lynx_upgrade1a':
			journalEntry = journalManager.GetEntryByString( "Lynx Upgrades 1a DFFC24F2-4650EF40-F8679FA6-F3C18F00" );
			break;

		case 'th1003_map_lynx_upgrade1b':
			journalEntry = journalManager.GetEntryByString( "Lynx Upgrades 1b 9BCE69B0-4F6F3CE0-B81E98A2-0C0E97F8" );
			break;

		case 'th1003_map_lynx_upgrade2':
			journalEntry = journalManager.GetEntryByString( "Lynx Upgrades 2 1898B768-4D6FD27D-26BE2C92-0F7883B1" );
			break;

		case 'th1003_map_lynx_upgrade3':
			journalEntry = journalManager.GetEntryByString( "Lynx Upgrades 3 0EAEA2E4-44DFC898-582FAE83-3D5136CD" );
			break;

		case 'th1005_journal_gryphon_part1':
		case 'th1005_journal_gryphon_part2':
		case 'th1005_journal_gryphon_part3':
		case 'th1005_journal_gryphon_part4':
		case 'th1005_journal_gryphon_part5':
		case 'th1005_journal_gryphon_part6':
			journalEntry = journalManager.GetEntryByString( "Gryphon Set 50B8D133-4FAA0E7B-B42AF7BE-6B57B0F0" );
			break;

		case 'th1005_map_gryphon_upgrade1a':
			journalEntry = journalManager.GetEntryByString( "Gryphon Upgrades 1A AC4B6FA2-4E2B04E9-3AC400A0-239A8199" );
			break;

		case 'th1005_map_gryphon_upgrade1b':
			journalEntry = journalManager.GetEntryByString( "Gryphon Upgrades 1B 8C40CB19-4F5F60EA-90A9F183-598494D7" );
			break;

		case 'th1005_map_gryphon_upgrade2':
			journalEntry = journalManager.GetEntryByString( "Gryphon Upgrades 2 C4ED40CA-4C8EFD8A-D5D4F2BB-D9346FC0" );
			break;

		case 'th1005_map_gryphon_upgrade3':
			journalEntry = journalManager.GetEntryByString( "Gryphon Upgrades 3 E9C98E64-4EF05D83-3AD112BA-D9A6CE87" );
			break;

		case 'th1007_journal_bear_part1':
		case 'th1007_journal_bear_part2':
		case 'th1007_journal_bear_part3':
		case 'th1007_journal_bear_part4':
		case 'th1007_journal_bear_part5':
		case 'th1007_journal_bear_part6':
		case 'th1007_journal_bear_part7':
			journalEntry = journalManager.GetEntryByString( "Bear Set 8B08E62D-4C5B4C9D-487C3FA4-0D791E9F" );
			break;

		case 'th1007_map_bear_upgrade1a':
			journalEntry = journalManager.GetEntryByString( "Bear Upgrades 1A 0F5F5FD9-4DA725BF-67359E85-C699556C" );
			break;

		case 'th1007_map_bear_upgrade1b':
			journalEntry = journalManager.GetEntryByString( "Bear Upgrades 1B DD71DEDB-4EF05466-56C61683-9DD9BE20" );
			break;

		case 'th1007_map_bear_upgrade2':
			journalEntry = journalManager.GetEntryByString( "Bear Upgrades 2 72B5DC68-416D1945-E831158A-18CAC397" );
			break;

		case 'th1007_map_bear_upgrade3':
			journalEntry = journalManager.GetEntryByString( "Bear Upgrades 3 E08F4FAF-4FA7D935-BAA382A6-99485387" );
			break;

		case 'th1009_journal_wolf_part4':
		case 'th1009_journal_wolf_part1a':
		case 'th1009_journal_wolf_part2a':
		case 'th1009_journal_wolf_part3a':
		case 'th1009_crystal':
			journalEntry = journalManager.GetEntryByString( "Wolf Set ECDA507B-4902A54F-85D7CAA9-E26BF51C" );
			break;

		case 'th1009_map_wolf_upgrade1a':
			journalEntry = journalManager.GetEntryByString( "Wolf Upgrades 1A 2B4D53F2-4D13E107-B76B1BBE-46F9BEE2" );
			break;

		case 'th1009_map_wolf_upgrade1b':
			journalEntry = journalManager.GetEntryByString( "Wolf Upgrades 1B 65F92ED7-46364BBF-274F688B-2B9B242B" );
			break;

		case 'th1009_map_wolf_upgrade2':
			journalEntry = journalManager.GetEntryByString( "Wolf Upgrades 2 0ACA2DC7-441F17F1-629E568D-1DDC8373" );
			break;

		case 'th1009_map_wolf_upgrade2b':
			journalEntry = journalManager.GetEntryByString( "Wolf Upgrades 2b B5A3EBF1-48584027-035CBD88-C65AE7D1" );
			break;

		case 'th1009_map_wolf_upgrade3':
			journalEntry = journalManager.GetEntryByString( "Wolf Upgrades 3 C78B90EC-4B01543C-892550A7-3F7CCF23" );
			break;

		case 'th1009_map_wolf_upgrade3b':
			journalEntry = journalManager.GetEntryByString( "Wolf Upgrades 3b 08304185-4846664C-6DD759BC-1DE779D6" );
			break;

		case 'th1010_armor_note':
		case 'th1010_schematic_armor':
		case 'th1010_schematic_boots':
		case 'th1010_schematic_gloves':
		case 'th1010_schematic_pants':
			journalEntry = journalManager.GetEntryByString( "th1010ofirarmor A1FFE752-47824B4F-276EA882-944E443E" );
			break;

		case 'th700_prison_journal':
		case 'th700_crypt_journal':
		case 'th700_vault_journal':
		case 'th700_lake_journal':
		case 'th700_chapel_journal':
			journalEntry = journalManager.GetEntryByString( "th700_red_wolf D0589E62-4A43EF34-AF11C692-E0E0D72C" );
			break;

		case 'th700_preacher_bones':
			journalEntry = journalManager.GetEntryByString( "th700 Preacher bones 3D231EB3-445C3C97-0F6411B8-6A511BA6" );
			break;

		case 'th701_bear_contract':
		case 'th701_bear_journal':
		case 'th701_bear_notes':
			journalEntry = journalManager.GetEntryByString( "th701_bear_gear" );
			break;

		case 'th701_cat_journal':
		case 'th701_cat_notes':
		case 'th701_cat_witcher_notes':
		case 'th701_cat_journal':
		case 'th701_cat_journal':
			journalEntry = journalManager.GetEntryByString( "th701_cat_gear" );
			break;

		case 'th701_gryphon_moreau_letter':
		case 'th701_gryphon_moreau_journal':
		case 'th701_gryphon_jerome_letter':
		case 'th701_power_core':
			journalEntry = journalManager.GetEntryByString( "th701_gryphon_gear" );
			break;

		case 'th701_wolf_journal':
		case 'th701_wolf_witcher_note':
		case 'th701_portal_crystal':
		case 'th701_coward_journal':
		case 'th701_wg_key':
			journalEntry = journalManager.GetEntryByString( "th701_wolf_gear 6DBE2D54-4A4E2066-CAC1ABB6-97CB905B" );
			break;

		case 'gp_prologue_bandit_note03':
		case 'gp_prologue_key01':
			journalEntry = journalManager.GetEntryByString( "lw_prologue_bandit_treasure 6321316F-48125639-75F5A181-D5ECEB4E" );
			break;

		case 'poi_telescope_note':
			journalEntry = journalManager.GetEntryByString( "lw_prologue_deserter_stash EE12C78F-46DDAD07-49FD648A-11BD32B3" );
			break;

		case 'lw_temerian_soldiers_journal':	// to-do
		case 'lw_prologue_temerian_treasure_note':
		case 'lw_prologue_royal_key01':
			journalEntry = journalManager.GetEntryByString( "lw_prologue_temerian_treasure 753CDADE-4D361932-F7325D82-2DDC8703" );
			break;

		case 'lw_tm_underwater_dungeon_note':
			journalEntry = journalManager.GetEntryByString( "lw_tm_sunken_treasure D36D4C2A-4EC28D7A-48B93E8F-B6A0EB42" );
			break;

		case 'lw_cp33_treasure_note':
			journalEntry = journalManager.GetEntryByString( "lw_cp33_sunken_treasure B8486EAF-4E34ECCB-69896A96-1E5CB685" );
			break;

		case 'lw_cp39_captains_log':
			journalEntry = journalManager.GetEntryByString( "lw_cp34_shipwreck_island 6361033C-4E1B9ACF-83944B87-FF32099D" );
			break;

		case 'lw_de11_note':
		case 'lw_de11_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_de11" );
			break;

		case 'lw_de32_treasure_note':
			journalEntry = journalManager.GetEntryByString( "lw_de32_campfire_treasure DDF3B2FC-42AA9D43-BF69CF8C-B5C34370" );
			break;

		case 'lw_gr7_soldiers_note':
		case 'lw_gr7_hidden_pier_key':
			journalEntry = journalManager.GetEntryByString( "lw_gr7_hidden_pier 78081E59-48B2024F-7C64CDBA-8D1E9E15" );
			break;

		case 'lw_gr12_ferry_man_note':
			journalEntry = journalManager.GetEntryByString( "lw_gr12_ferry_station_2 A6F4D060-4EDE551A-B5F03DB3-00DDE3A3" );
			break;

		case 'lw_gr34_note':
		case 'lw_gr34_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_gr34" );
			break;

		case 'lw_gr39_note':
		case 'lw_gr39_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_gr39" );
			break;

		case 'lw_gr40_note':
		case 'lw_gr40_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_gr40" );
			break;

		case 'lw_gr41_note':
		case 'lw_gr41_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_gr41" );
			break;

		case 'lw_gr_poi_042_letter':
		case 'lw_gr_poi_042_chest_key':
			journalEntry = journalManager.GetEntryByString( "lw_gr_poi_042_ponds 9D07785D-40177008-757518A2-60A41A1A" );
			break;

		case 'lw_sb2_sunken_ships_note':
			journalEntry = journalManager.GetEntryByString( "lw_sb2_sunken_ships_note 517B15A4-41AD72F5-DC6272BD-7B229747" );
			break;

		case 'lw_sb13_note':	// to-do
		case 'lw_sb13_smugglers_note':
			journalEntry = journalManager.GetEntryByString( "Sunken treasure 987A0A55-4A591BD2-64B80897-ECCB7F89" );
			break;

		case 'lw_sb24_note':
		case 'lw_sb24_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_sb24" );
			break;

		case 'lw_sk3_ship_note':
			journalEntry = journalManager.GetEntryByString( "lw_skellige_sk3_sunken_treasure DB5F4199-43E77DB8-6EC10C95-679DA352" );
			break;

		case 'lw_sk4_note':
			journalEntry = journalManager.GetEntryByString( "lw_sk4" );
			break;

		case 'lw_sk_poi_005_treasure_note':
			journalEntry = journalManager.GetEntryByString( "lw_sk_poi_005 17D71DCD-434DB5D3-0B15E1B5-BEBC0897" );
			break;

		case 'lw_sk30_villager_note':
		case 'lw_sk30_chest_key':
			journalEntry = journalManager.GetEntryByString( "lw_sk30_mushroom_farms B459A0ED-47E1AE2C-969F32A5-0B9075E6" );
			break;

		case 'lw_sk31_note':
		case 'lw_sk31_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_sk31" );
			break;

		case 'lw_sk38_treasure_note':
		case 'lw_sk38_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_sk38" );
			break;

		case 'lw_sk42_treasure_note':
		case 'lw_sk42_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_sk_poi_042 5DEA555A-4B728A68-074DD092-B089C963" );
			break;

		case 'sk48_splintered_ships_note':
			journalEntry = journalManager.GetEntryByString( "lw_skellige_sk48_splintered_ships 9EC3E829-46967F66-95A647B3-DFBC639E" );
			break;

		case 'lw_sk_poi_050_note':
			journalEntry = journalManager.GetEntryByString( "lw_sk_poi_050 485B407E-42A71E25-DBF39795-2451430F" );
			break;

		case 'lw_sk_poi_056_note':
			journalEntry = journalManager.GetEntryByString( "lw_sk_poi_056 6E47B277-4316B96E-CCE41183-349E790B" );
			break;

		case 'lw_sk57_treasure_note':
		case 'lw_sk57_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_sk_poi_057 9F5A8B38-428BB234-87BD92BE-5BB0CF08" );
			break;

		case 'lw_tm6_note':
		case 'lw_tm6_treasure_key':
			journalEntry = journalManager.GetEntryByString( "lw_tm6" );
			break;

		case 'lw_tm15_treasure_hunter_note':
			journalEntry = journalManager.GetEntryByString( "Elvish Chest 1D6D26EC-454BD469-FEBC1E9A-F246129B" );
			break;

		case 'ep1_poi_01_note_02':
		case 'ep1_poi_01_key':
			journalEntry = journalManager.GetEntryByString( "ep1poi01 D5D60E68-40E4E8AC-9FADA380-0F2889DC" );
			break;

		case 'ep1_poi_02_note':
		case 'ep1_poi_02_key_1':
			journalEntry = journalManager.GetEntryByString( "ep1poi02 55341374-4C989677-B9A42DAE-06229E06" );
			break;

		case 'ep1_poi_04_note':
		case 'ep1_poi_04_key':
			journalEntry = journalManager.GetEntryByString( "ep1poi04 96F7F53A-412C7099-F5BE66B0-227B967D" );
			break;

		case 'ep1_poi_05_key':
		case 'ep1_poi_05_note':
			journalEntry = journalManager.GetEntryByString( "ep1poi05 4F1D428D-4906FE69-E65FAA9B-2F7D3200" );
			break;

		case 'ep1_poi_08_note_a':
		case 'ep1_poi_08_key':
			journalEntry = journalManager.GetEntryByString( "ep1poi08 6F79BD9A-4653FFF3-29511FA8-513857C3" );
			break;

		case 'ep1_poi_10_note':
		case 'ep1_poi_10_key':
			journalEntry = journalManager.GetEntryByString( "ep1poi10 665C3401-4B425D8F-70D367AA-EE8FCF0F" );
			break;

		case 'ep1_poi_26_note':
		case 'ep1_poi_26_key':
			journalEntry = journalManager.GetEntryByString( "ep1poi26 4F090ED7-4C07940F-D4B94484-85848FBD" );
			break;

		case 'ep1_poi_26_note_b':
		case 'ep1_poi_26_key_b':
			journalEntry = journalManager.GetEntryByString( "ep1poi26b B4A3B282-49F6618F-F2004684-9FDDE92B" );
			break;

		case 'poi_bar_a_05_note':
			journalEntry = journalManager.GetEntryByString( "poi_bar_a_05 D1FB4ECD-4C46CFAF-3FA40BB7-A7D869AF" );
			break;

		case 'poi_bar_a_10_note':
		case 'poi_bar_a_10_key':
			journalEntry = journalManager.GetEntryByString( "bar_a_10 CB9A683E-401D6D11-8D174DA7-9A673C01" );
			break;

		case 'q702_spoon_key_message':
		case 'q702_spoon_key':
		case 'poi_car_a_11_note':
			journalEntry = journalManager.GetEntryByString( "car_a_11 E39845AC-4799DA94-ECDBA6B6-388C7811" );
			break;

		case 'poi_car_b_08_note':
		case 'poi_car_b_08_key':
			journalEntry = journalManager.GetEntryByString( "car_b_08 9928729B-4F4B3F0A-501704A5-218F60AC" );
			break;

		case 'poi_car_b_10_note':
		case 'poi_car_b_10_note_02':
		case 'poi_car_b_10_key':
			journalEntry = journalManager.GetEntryByString( "car_b_10 BA4BC5BD-4B52F387-D2C251B6-6873EAF9" );
			break;

		case 'poi_dun_b_03_note':
			journalEntry = journalManager.GetEntryByString( "dun_b_03 FD7151A7-442DAC7C-535F9180-0ABA93AA" );
			break;

		case 'poi_gor_a_10_note':
		case 'poi_gor_a_10_key':
		case 'poi_gor_a_10_vine':
		case 'poi_gor_a_10_vine_edible':
			journalEntry = journalManager.GetEntryByString( "gor_a_10 0BBCBACE-4099237B-24A55B88-77B4A861" );
			break;

		case 'poi_gor_b_04_note':
		case 'poi_gor_b_04_key':
			journalEntry = journalManager.GetEntryByString( "gor_b_04 00685344-477DFB0F-3993EFA6-355396DD" );
			break;

		case 'poi_gor_c_14_note':
			journalEntry = journalManager.GetEntryByString( "gor_c_14 9406114D-40AE7C4A-4EC566BB-8977600E" );
			break;

		case 'poi_gor_d_20_key':
			journalEntry = journalManager.GetEntryByString( "poi_gor_d_20 C651CB60-4D784070-4F8AD0B6-36D4289A" );
			break;

		case 'poi_san_a_01_note':
		case 'poi_san_a_01_key':
			journalEntry = journalManager.GetEntryByString( "san_a_01 ED6B1D03-4E2CEE82-FB1BA4B3-A1760CE5" );
			break;

		case 'poi_san_b_02_key':
		case 'poi_san_b_02_note':
			journalEntry = journalManager.GetEntryByString( "san_a_01 ED6B1D03-4E2CEE82-FB1BA4B3-A1760CE5" );
			break;

		case 'poi_ved_a_03_note':
		case 'poi_ved_a_03_key':
			journalEntry = journalManager.GetEntryByString( "ved_a_03 2FDE6F32-49FC4D56-CEF8619D-23B0704A" );
			break;

		case 'poi_vin_b_05_note02':
		case 'poi_vin_b_05_key':
			journalEntry = journalManager.GetEntryByString( "vin_b_05 D9EF08F9-4F186BC0-4B06C1A4-B64C1CC4" );
			break;

		case 'poi_ww_coronata_note_camp':
		case 'poi_ww_coronata_key':
			journalEntry = journalManager.GetEntryByString( "ww_cor_04 EB22AF64-4032D7FA-39971D99-5CEBF58B" );
			break;

		case 'poi_ww_vermentino_note_camp':
		case 'poi_ww_vermentino_key':
			journalEntry = journalManager.GetEntryByString( "ww_ver_13 FB8802DF-417EE465-2073D1BA-15176EF0" );
			break;

		case 'poi_ww_coronata_note_stash':
		case 'poi_ww_cor_03_note':
		case 'poi_ww_cor_02_note':
			journalEntry = journalManager.GetEntryByString( "ww_coronata" );
			break;

		case 'poi_ww_vermentino_note_stash':
		case 'poi_ww_ver_10_note':
		case 'poi_ww_ver_12_note':
			journalEntry = journalManager.GetEntryByString( "ww_vermentino" );
			break;

		case 'poi_ww_bel_05_note':
			journalEntry = journalManager.GetEntryByString( "ww_belgard" );
			break;

		case 'poi_ww_belgard_secret_plot_proper_note':
		case 'poi_ww_belgard_secret_plot_failsafe_note':
		case 'poi_ww_belg_final_key':
			journalEntry = journalManager.GetEntryByString( "ww_belgard_secret 060EE78A-4B7A92A4-B4DF28A4-63E01A87" );
			break;

		case 'Signs Enhancement':
		case 'mq1060_key_to_pit':
		case 'mq1060_right_hand_potion':
		case 'mq1060_reinalds_ingredient':
			journalEntry = journalManager.GetEntryByString( "mq1060_devils_pit" );
			break;

		case 'mq1060_armor_vesemir_note':
		case 'mq1060_armor_osmund_note':
			journalEntry = journalManager.GetEntryByString( "mq1060_armor_upgrades" );
			break;


		default:
			break;
		}

		if( journalEntry )
		{
			entryStatus = journalManager.GetEntryStatus(journalEntry);
			if( entryStatus == JS_Success || entryStatus == JS_Failed )
			{
				playerInv.RemoveItemTag( questItems[itemIdx], 'Quest' );
				playerInv.RemoveItemTag( questItems[itemIdx], 'NoDrop' );
			}
		}
	}
	*/
}