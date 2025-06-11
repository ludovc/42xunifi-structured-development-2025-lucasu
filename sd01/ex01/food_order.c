int	process_food_order(struct OrderRequest *request)
{
	struct OrderConfirmation	confermation;

	if (check_restaurant_status(request))
	{
		confermation = create_standard_confirmation();
	}
	else
	{
		confermation = create_preorder_confirmation();
	}
	send_confirmation_notification(confermation);
}
